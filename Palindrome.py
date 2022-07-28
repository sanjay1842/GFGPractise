S=input()
l=list(S);
l=l[::-1]
s=''
for i in l:
    s=s+''.join(i);
if(S==s):
	print("1")
else:
	print("0")
  
