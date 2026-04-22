import os

file_path = "emails.txt"

def is_valid_email(email):
    # Must contain exactly one @
    if email.count("@") != 1:
        return False
    # Must have something before and after @
    parts = email.split("@")
    if len(parts[0]) == 0 or len(parts[1]) == 0:
        return False
    # Must have a dot after @
    if "." not in parts[1]:
        return False
    # Should not start or end with @
    if email.startswith("@") or email.endswith("@"):
        return False
    return True

def is_duplicate(email):
    if not os.path.isfile(file_path):
        return False

    with open(file_path, "r") as file:
        for line in file:
            if line.strip().lower() == email.lower():
                return True
    return False

def add_email():
    email = input("Enter email: ")

    if not is_valid_email(email):
        print("Invalid email! Must contain '@' and valid format.")
        return

    if is_duplicate(email):
        print("This email already exists! Duplicates not allowed.")
        return

    with open(file_path, "a") as file:
        file.write(email + "\n")
    print("Email added successfully!")

def show_all():
    if not os.path.isfile(file_path):
        print("No emails file found!")
        return

    with open(file_path, "r") as file:
        lines = file.readlines()
        if len(lines) == 0:
            print("No emails!")
            return
        print("\n--- All Emails ---")
        for i in range(len(lines)):
            print(f"{i+1}. {lines[i].strip()}")

while True:
    print("\n===== Email Manager =====")
    print("1. Add Email")
    print("2. Show All Emails")
    print("3. Exit")

    ch = int(input("\nEnter choice: "))

    if ch == 1:
        add_email()
    elif ch == 2:
        show_all()
    elif ch == 3:
        break
    else:
        print("Invalid choice!")