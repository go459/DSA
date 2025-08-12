def insert_element(arr, element):
    arr.append(element)
    print(f"Inserted {element}.")

def delete_element(arr, element):
    if element in arr:
        arr.remove(element)
        print(f"Deleted {element}.")
    else:
        print(f"{element} not found.")

def search_element(arr, element):
    if element in arr:
        print(f"{element} found at index {arr.index(element)}.")
    else:
        print(f"{element} not found.")

def display(arr):
    print("Array contents:", arr)

# Example usage:
arr = []

insert_element(arr, 10)
insert_element(arr, 20)
insert_element(arr, 30)
display(arr)

search_element(arr, 20)
delete_element(arr, 10)
display(arr)
