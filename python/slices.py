# # basic 
# a=[10,20,30,40,50]
# print(a[1:4])#start from 1 and stops before 4

# #from begining to some level
# print(a[:3])

# #till end
# print(a[2:])

# copy=a[:]
# print(copy)#used to make a shallow copy

#now using step
#(1)to skip elements
a=[1,2,3,4,5,6,7,8,9,10]
print(a[::2])#for printing every second element or n element
mid=len(a)//2
print(a[mid-1:mid])

# #(2)now to reverse the string
# print(a[::-1])

# #it works on string too
# s="Stanford"
# print(s[3:])