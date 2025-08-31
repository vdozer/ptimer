<img src="ptimer.png" alt="Ptimer logo" width="240" height="320" />

# ptimer

A minimal C program for handling Pomodoro sessions in the terminal.  
It also keeps track of how many sessions you’ve completed.

---

## Build & run

Compile and run in one command:

```bash
make && ./ptimer
```

---

## Usage

When you run the program, you’ll be prompted with:

```
Start pomodoro? y/n/t
```

Options:

- **y** → Start a Pomodoro session. You’ll then be asked how many times to repeat.  
- **n** → Exit the program successfully.  
- **t** → Test the alarm bell (plays twice) and exit the program successfully
.  

---

## Notes

- Session repeat data is stored in `ptimer.txt`.
