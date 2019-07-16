
#a
    
z=input()
li=list(map(int,z))
zsum=sum(li)
zsum=str(zsum)
rev=zsum[::-1]
if(zsum==rev):
    print("YES")
else:
    print("NO")
