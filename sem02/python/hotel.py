menu = {
    "Burger": 150,
    "Pizza": 300,
    "Sandwich": 120,
    "Coffee": 50,
    "Pasta": 200,
    "Juice": 80
}

order = {}

while True:
    print("\n===== Hotel Management =====")
    print("1. Show Menu")
    print("2. Place Order")
    print("3. View Order")
    print("4. Generate Bill")
    print("5. Exit")

    ch = int(input("\nEnter choice: "))

    if ch == 1:
        print("\n--- Menu ---")
        for item, price in menu.items():
            print(f"{item} - Rs.{price}")

    elif ch == 2:
        item = input("Enter item name: ")
        if item in menu:
            qty = int(input("Enter quantity: "))
            if item in order:
                order[item] += qty
            else:
                order[item] = qty
            print(f"Added {qty}x {item}")
        else:
            print("Item not found in menu!")

    elif ch == 3:
        if len(order) == 0:
            print("No orders yet!")
        else:
            print("\n--- Your Order ---")
            for item, qty in order.items():
                print(f"{item} x{qty} = Rs.{menu[item] * qty}")

    elif ch == 4:
        if len(order) == 0:
            print("No orders to bill!")
        else:
            total = 0
            print("\n--- Bill ---")
            for item, qty in order.items():
                cost = menu[item] * qty
                print(f"{item} x{qty} = Rs.{cost}")
                total += cost
            print(f"\nTotal: Rs.{total}")
            order = {}

    elif ch == 5:
        print("Thank you! Visit again!")
        break
    else:
        print("Invalid choice!")