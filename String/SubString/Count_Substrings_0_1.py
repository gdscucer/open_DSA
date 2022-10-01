# Count Substrings with number of 0s and 1s in ratio of X : Y
# Python3 code to implement the approach

from collections import defaultdict

# Function to find number of subarrays
# with sum equal to 0.
def CountSubStringsWithZeroSum(arr):
	n = len(arr)

	# Creating default dictionary with default val zero.
	# It stores the count of previous subarrays sum
	# from 0 to i for every i in range(0, curr_inndex-1)
	prevSum = defaultdict(lambda: 0)
	count = 0
	currsum = 0

	for i in range(0, n):
		currsum += arr[i]
		if currsum == 0:
			count += 1

		if currsum in prevSum:
			count += prevSum[currsum]

		prevSum[currsum] += 1

	return count

# Function to count subarrays with
# number of 0's and 1's in ratio of X:Y
def countSubStringsWith01InRatioXY(S, X, Y):

		# First change 0's to -Y 1's to X
	arr = []
	for i in S:
		arr.append(-Y if i == '0' else X)
	return CountSubStringsWithZeroSum(arr)


# Driver code
if __name__ == "__main__":
	S = "010011010100"
	X = 3
	Y = 2

	# Function Call
	print(countSubStringsWith01InRatioXY(S, X, Y))
