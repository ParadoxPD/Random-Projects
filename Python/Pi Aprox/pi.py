from math import factorial
from decimal import Decimal
from decimal import localcontext


def series(x, presc):
    with localcontext() as ctx:
        ctx.prec = 1000000  # desired precision
        series_sum = Decimal(0)

        for i in range(1, presc+1):

            term = ctx.power((-1), i)
            term = term * Decimal(1)/Decimal(((2*i+1)*factorial(i)))

            term *= ctx.power(Decimal(x), (2*i+1))

            for j in range(i):
                term = term*Decimal((1/2-j))

            series_sum += term

        pi = Decimal(12)*(Decimal(1/2)+series_sum -
                          (ctx.power(3, Decimal(1/2))/Decimal(8)))

        return pi


if __name__ == '__main__':
    with open('pi_calc.txt', 'w') as file:
        digits = str(series(1/2, 10000))[2:]
        with open('Pi1MDP.txt') as data_file:
            dig = data_file.read()
            for i in range(len(digits)):
                if not digits[i] == dig[i]:
                    print(f"Not {i}")
                    break
        file.write(digits)
