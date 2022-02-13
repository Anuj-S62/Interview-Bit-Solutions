def factorial(n):
    if(n<0):
        return 1
    else:
        fact=1
        for i in range(n):
            fact=fact*(i+1)
        return fact
class Solution:
	# @param A : integer
	# @param B : integer
	# @return an integer

	def uniquePaths(self, A, B):
        if(A==1 or B==1):
            return 1
        res=(factorial(A+B-2)/factorial(A-1))/factorial(B-1)
        return int(res)