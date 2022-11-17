import pandas as pd
A = pd.read_csv(r'C:\Users\Vedika\Downloads\Heart.csv')
A.head()
A.tail()
A.describe
A.columns
A = A.rename(columns={"MaxHR":"MaxHR_new"})
A.shape
A.dtypes
A["Age"].mean()
A["Age"].median()
A["Age"].min()
A["Age"].max()
A.isnull().sum()
A[A==0].count()
A["AHD"].replace(("Yes","No"),(1,0))
