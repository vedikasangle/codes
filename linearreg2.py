import pandas as pd 
import matplotlib.pyplot as plt
A = pd.read_csv(r"C:\Users\Vedika\Downloads\temperatures.csv")
A.head()
A.tail()
x = A[["YEAR"]]
y = A[["JAN"]]
from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test = train_test_split(x,y,test_size = 0.20)
len(x_train)
len(x_test)
from sklearn.linear_model import LinearRegression
reg = LinearRegression()
model = reg.fit(x_train,y_train)
y_pred = model.predict(x_test)
y_pred
plt.scatter(x_train,y_train,color ="pink")
plt.title("Temperatures of Jan from 1907-2017")
plt.xlabel("Year")
plt.ylabel("Month of January")
plt.plot(x_train,model.predict(x_train),color = "green")
from sklearn.metrics import mean_squared_error
mse = mean_squared_error(y_test,y_pred)
print(mse)
from sklearn.metrics import mean_absolute_error
mae = mean_absolute_error(y_test,y_pred)
print(mae)
from math import sqrt
rmse = sqrt(mse)
print(rmse)
from sklearn.metrics import r2_score
r2_score = r2_score(y_test,y_pred)
print(r2_score)
