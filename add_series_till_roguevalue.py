user_input = None
total_sum = 0
while user_input != 0:
    user_input = int(input("Enter a number:"))
    total_sum = total_sum + user_input 


print("The total sum of the numbers are {}".format(total_sum))
