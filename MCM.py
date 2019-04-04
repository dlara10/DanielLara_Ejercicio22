import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ MCM.cpp -o MCM.x")
os.system("./MCM.x > datos.dat")

data = np.loadtxt("datos.dat")
x = data[:0]


plt.figure()
plt.hist(x)
plt.xlabel('Value')
plt.ylabel('Frequency')
plt.title('Histogram')
plt.savefig("datos")
