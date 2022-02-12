def sleep_in(weekday, vacation):
    week = ["Monday","Tuesday",  "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]
    if weekday in week:
        return True
    elif (weekday =="sunday"):
        vacation = True
        return vacation
    else:
        return False

A = input("Enter a week day")
b = input("check vacation")
print(sleep_in(A, b))