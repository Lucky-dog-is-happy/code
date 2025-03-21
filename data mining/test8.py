Employees = {"Alice": "Engineer", "Bob": "Designer"}
New_Positions = {"Alice": "Senior Engineer", "Charlie": "Manager"}

def update_employee_positions(Employees, New_Positions):
    Employees.update(New_Positions)

update_employee_positions(Employees, New_Positions)

print(Employees)