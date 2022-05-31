# ft_printf

***The aim of this project is to recode the printf function from the C Library.***

In this project, you can learn how to use variadic arguments. More importantly, you can challenge yourself to structure the code well, so it can be extended to different usecases.

## Technical considerations

- Allowed functions: ```malloc```, ```free```, ```write```, ```va_start```, ```va_arg```, ```va_copy```, ```va_copy```
- All heap allocated memory space must be properly freed when necessary
- It will manage the following conversions: ```cspdiuxX%```
- It will manage any combination of ```-0.*``` flags and minimum field width with all conversions

## How to test
> Run the following commands. You can replace the ```test.c``` with your own test file

```shell
$ git clone https://github.com/prranges/ft_printf
$ cd ft_printf
$ make
$ gcc test.c libftprintf.a
$ ./a.out
```
