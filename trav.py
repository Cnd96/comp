import random

from datetime import datetime



visited=[False]*10000
noOfCities
minDis=sys.maxsize
distanceData=[[0   ,    79    ,  133,     107   ,  255,     177  ,   149 ,    150   ,  243 ,    125 ,    230  ,   191  ,   220   ,  63  ,    15    ,  200  ,   277   ,  69],
[79   ,   0    ,   65  ,    253   ,  187 ,    147 ,    137,     72    ,  137  ,   13  ,    279  ,   95   ,   160   ,  12   ,   185   ,  93   ,   177   ,  216],
[133   ,  65   ,   0   ,    280   ,  41   ,   233 ,    236  ,   6     ,  111  ,   201 ,    62   ,   207  ,   80    ,  34   ,   92    ,  187  ,   88   ,   13],
[107    , 253   ,  280 ,    0     ,  279  ,   188 ,    174   ,  266   ,  80   ,   212 ,    236  ,   122  ,   264   ,  187  ,   223   ,  288  ,   12   ,   70],
[255   ,  187   ,  41  ,    279   ,  0    ,   161 ,    254   ,  120   ,  126  ,   129 ,    39   ,   276  ,   174   ,  236  ,   131   ,  81   ,   158  ,   57],
[177   ,  147   ,  233 ,    188   ,  161  ,   0   ,    141   ,  273   ,  274  ,   194 ,    292  ,   33   ,   211  ,   153  ,   261   ,  41   ,   216  ,   255],
[149    , 137   ,  236 ,    174   ,  254  ,   141 ,    0     ,  96    ,  1     ,  183 ,    64   ,   261  ,   223  ,   89  ,    263   ,  25   ,   66   ,   283],
[150     ,72    ,  6   ,    266   ,  120  ,   273 ,    96    ,  0     ,  21    ,  85  ,    109  ,   111  ,   284  ,   82  ,    102   ,  250  ,   108  ,   110],
[243    , 137  ,   111 ,    80    ,  126  ,   274 ,    1     ,  21    ,  0     ,  97   ,   227  ,   210  ,   194   ,  191  ,   16    ,  139  ,   80   ,   292],
[125    , 13   ,   201 ,    212   ,  129  ,   194 ,    183   ,  85   ,   97    ,  0    ,   264  ,   187  ,   90    ,  149 ,    289   ,  290  ,   24   ,   266],
[230    , 279  ,   62  ,    236   ,  39   ,   292 ,    64    ,  109  ,   227   ,  264  ,   0    ,   206  ,   67   ,   171 ,    299  ,   99   ,   99   ,   46],
[191    , 95   ,   207 ,    122   ,  276  ,   33  ,    261   ,  111  ,   210   ,  187  ,   206  ,   0    ,   76   ,   20   ,   268  ,   274  ,   22   ,   15],
[220   ,  160  ,   80  ,    264  ,   174  ,   211 ,    223   ,  284  ,   194   ,  90   ,   67   ,   76   ,   0    ,   187  ,   96   ,   280  ,   186  ,   51],
[63    ,  12   ,   34  ,    187  ,   236  ,   153 ,    89    ,  82   ,   191   ,  149  ,   171  ,   20   ,   187  ,   0   ,    34   ,   158  ,   149  ,   284],
[15     , 185  ,   92  ,    223  ,   131  ,   261 ,    263   ,  102  ,   16    ,  289  ,   299  ,   268  ,   96   ,   34  ,    0     ,  26   ,   53   ,   47],
[200   ,  93   ,   187 ,    288  ,   81    ,  41  ,    25    ,  250  ,   139   ,  290  ,   99   ,   274  ,   280  ,   158  ,   26   ,   0    ,   134  ,   281],
[277    , 177 ,    88   ,   12  ,    158   ,  216  ,   66    ,  108  ,   80    ,  24   ,   99   ,   22   ,   186  ,   149  ,   53  ,    134  ,   0    ,   79],
[69     , 216,     13   ,   70 ,     57    ,  255 ,    283    , 110 ,    292   ,  266  ,   46  ,    15    ,  51  ,    284   ,  47 ,     281  ,   79  ,    0]]


def generateDistance():
    for i in range(noOfCities):
        temp = [0] * noOfCities
        distanceData.append(temp)
     
    for i in range(noOfCities):
        for j in range(i+1,noOfCities):
            randomNumber=random.randint(1, 300)
            distanceData[i][j]=randomNumber
            distanceData[j][i]=randomNumber
            
    
    

def calculateDistance(i, currentdistance, t):
        visited[i] = True
        t=t+1
        global minDis
        if t==noOfCities:
            minDis=min(minDis,(currentdistance+distanceData[i][0]))
            visited[i] = False
            return
        
        for j in range(noOfCities):
            if visited[j]==False:
                if (currentdistance+distanceData[i][j])>= minDis:
                    visited[i]=False
                    return
                calculateDistance(j,currentdistance+distanceData[i][j],t)
        
        visited[i]=False
                
            


# calculateDistance(0,0,0)
# minDis
noOfCities = 5
# generateDistance()
now = datetime.now()
calculateDistance(0,0,0)
print(minDis)
now2 = datetime.now()
print((now2-now))
# distanceData






#
# 
# 

import random
from datetime import datetime
visited=[False]*1000
minDistance=sys.maxsize
noOfCities=4
distanceData=[]

def generateDistance():
    for i in range(noOfCities):
        temp = [0] * noOfCities
        distanceData.append(temp)
     
    for i in range(noOfCities):
        for j in range(i+1,noOfCities):
            randomNumber=random.randint(1, 300)
            distanceData[i][j]=randomNumber
            distanceData[j][i]=randomNumber
            

def calculateDistance(i, currentdistance, t):
        visited[i] = True
        t=t+1
        global minDistance
        if t==noOfCities:
            minDistance=min(minDistance,(currentdistance+distanceData[i][0]))
            visited[i] = False
            return
        
        for j in range(noOfCities):
            if visited[j]==False:
                if (currentdistance+distanceData[i][j])>= minDis:
                    visited[i]=False
                    return
                calculateDistance(j,currentdistance+distanceData[i][j],t)
        visited[i]=False
             

generateDistance()          
now = datetime.now()
calculateDistance(0,0,0)
print(minDistance)
now2 = datetime.now()
print((now2-now).total_seconds())