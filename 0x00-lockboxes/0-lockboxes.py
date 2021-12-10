#!/usr/bin/python3

"""
Finds key in box and detemines if key can unlock all boxes,
returns true if yes false if no
"""


def canUnlockAll(boxes):
    """
    If all boxes can be unlocked, return true
	If not all boxes can be unlocked, return false
    """
    num = [0]
    total_len = len(boxes)
    for key in num:
        for unit in boxes[key]:
            if unit < total_len and unit not in num:
                num.append(unit)
    if len(num) == total_len:
        return True
    return False