# Mini Project: Daily Time Record

[![GitHub](https://img.shields.io/badge/GitHub-romarcablao-lightgrey)](https://github.com/romarcablao)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-romarcablao-blue)](https://linkedin.com/in/romarcablao)

### Features

1. **Time In and Out Module** - Enable you to log your time and save in a persistent storage (text file).
2. **Time Rendered Module** - Calculate the time you have rendered.
3. **Query Module** - Enable you to check/query you logs based on the dates.

_Note that this project might only work on a windows machine._

### How it works?

If you have an IDE like DevC++, you can open the `app.cpp` and compile it. The program's entrypoint is the `app.cpp`. All other modules are saved in the `src` directory:

1. Global Imports - `src/_global.h`
2. GetDate - `src/_getdate.h`
3. Time Rendered - `src/_timerendered.h`
4. Time In - `src/_timein.h`
5. Time Out - `src/_timeout.h`
6. Query - `src/_query.h`

You can also compile and run the program using the code snippet below. Note that you should have `g++ library` installed on your machine for it to work.

```bash
    g++ -o app app.cpp      # compile
    app.exe                 # run
```

![Screenshot](data/dtr-screenshot.png)
