import pandas as pd
import matplotlib.pyplot as plt

# Read data file and create a DataFrame
data = pd.read_csv('../data/data.csv', names=["x", "ux"])

x = data['x']  # first column is x-values
y = data['ux']  # second column is y-values (from u function)

# plot data (line plot)
plt.plot(x, y)
plt.show()
plt.savefig('../fig/problem2plot.pdf')