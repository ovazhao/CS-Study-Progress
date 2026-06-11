def rotate_list(lst, k):
    if not lst:
        return lst

    k = k % len(lst)  # Handle cases where k is greater than the list length
    return lst[-k:] + lst[:-k]