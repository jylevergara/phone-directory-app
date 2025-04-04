# Phone Directory 

This program is a command-line phone directory that allows users to search for contacts by name from a tab-separated data file. By using a partial name, users can retrieve matching phone records or gracefully exit by entering '!'. The program is designed to read, search, and display records efficiently.

## Execution

1. **Display Title**: Upon starting, the program displays the specified title.
2. **User Prompt**: The user is prompted to enter a partial name for searching.
3. **Search Operation**:
  - If a name containing the partial entry is found, the program displays the full record
  - If no match is found, nothing is displayed.
4. **Exit Option**: Entering '!' will exit the program immediately.
5. **End Message**: If the data file cannot be opened, an error message is displayed, and the program exits. On successful exit, a thank you message is shown.