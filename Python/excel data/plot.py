import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
plt.style.use('ggplot')


df = pd.read_excel('data.xlsx')


def estimate_coef(x, y):
    # number of observations/points
    n = np.size(x)

    # mean of x and y vector
    m_x, m_y = np.mean(x), np.mean(y)

    # calculating cross-deviation and deviation about x
    SS_xy = np.sum(y*x) - n*m_y*m_x
    SS_xx = np.sum(x*x) - n*m_x*m_x

    # calculating regression coefficients
    b_1 = SS_xy / SS_xx
    b_0 = m_y - b_1*m_x

    return(b_0, b_1)


def plot_regression_line(x, y, b):
    # plotting the actual points as scatter plot

    fig, axs = plt.subplots(3)

    axs[0].scatter(x[0], y[0], color="m",
                   marker="o", s=30)
    y_pred = b[0][0] + b[0][1]*x[0]
    axs[0].plot(x[0], y_pred, color="g")
    axs[0].set(xlabel='day', ylabel='price')

    axs[1].scatter(x[1], y[1], color="m",
                   marker="o", s=30)
    y_pred = b[1][0] + b[1][1]*x[1]
    axs[1].plot(x[1], y_pred, color="g")
    axs[1].set(xlabel='day', ylabel='size')

    axs[2].scatter(x[2], y[2], color="m",
                   marker="o", s=30)
    y_pred = b[2][0] + b[2][1]*x[2]
    axs[2].plot(x[2], y_pred, color="g")
    axs[2].set(xlabel='size', ylabel='price')

    plt.show()


def main():
    # observations
    price = df['Purchase Price']
    size = df['House Size in Sq Ft']

    x1 = (df['Days'])
    y1 = np.zeros((len(price.values)))
    for i in range(len(price.values)):
        y1[i] = (int(price.values[i][4:7]+'000'))
    b1 = estimate_coef(x1, y1)

    x2 = (df['Days'])
    y2 = size
    b2 = estimate_coef(x2, y2)

    x3 = size
    y3 = np.zeros((len(price.values)))
    for i in range(len(price.values)):
        y3[i] = (int(price.values[i][4:7]+'000'))
    b3 = estimate_coef(x3, y3)

    print([b1, b2, b3])

    plot_regression_line([x1, x2, x3], [y1, y2, y3], [b1, b2, b3])


if __name__ == "__main__":
    main()
