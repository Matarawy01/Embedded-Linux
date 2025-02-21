# print("Hello")

# x = lambda a: a+10
# print(x(5)) 

# ls = [1,2,3,4,5,6,7,8,9,10]
# print(list(filter(map x: x%2== 0, ls)))

import requests
from pprintpp import pprint
url = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")
pprint(url.json())