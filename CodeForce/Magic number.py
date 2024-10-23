n = input()  
ans = True 

i = 0  
while i < len(n):  
    if n[i] != '1' and n[i]!= '4':  
        ans = False
        break
    
    
    elif "444" in n:
        ans = False
        break
    i+=1

if n[0]==  '4':
    ans = False
if ans == False:
    print("NO")
else:
    print("YES")
