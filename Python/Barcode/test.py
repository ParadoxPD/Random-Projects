import cv2
from pylibdmtx.pylibdmtx import decode
import numpy as np
from matplotlib import pyplot as plt


image = cv2.imread('data3.jpeg', cv2.IMREAD_GRAYSCALE)

dim = (852, 480)

image = cv2.resize(image, dim, interpolation=cv2.INTER_AREA)
image = cv2.equalizeHist(image)


image = cv2.threshold(image, 210, 255, cv2.THRESH_BINARY)[1]
image = cv2.bitwise_not(image)
cv2.imshow('Image Sharpening', image)
cv2.waitKey(0)
cv2.destroyAllWindows()

# barcode = decode(image)
# print(barcode)
