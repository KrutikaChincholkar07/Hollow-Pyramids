rows = 4

# Upper part
for i in range(1, rows + 1):
    print("* " * i, end="")
    print("  " * (2 * (rows - i)), end="")
    print("* " * i)

# Lower part
for i in range(rows - 1, 0, -1):
    print("* " * i, end="")
    print("  " * (2 * (rows - i)), end="")
    print("* " * i)
