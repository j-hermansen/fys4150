import pandas as pd
import matplotlib.pyplot as plt

# Read data file and create a DataFrame
data = pd.read_csv('data.txt')
data = pd.DataFrame(data)

x = data[0]  # first column is x-values
y = data[1]  # second column is y-values (from u function)

# plot data (line plot)
plt.plot(x, y, 'r--')
plt.show()