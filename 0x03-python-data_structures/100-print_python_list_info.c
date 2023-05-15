#include <Python.h>

/**
 * print_python_list_info - prints basic info about Python lists
 * @p:  PyObject list
 */
void print_python_list_info(PyObject *p)
{
	int x;
	int alloc;
	int size;
	PyObject *obj;

	size = Py_SIZE(p);
	alloc = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", alloc);

	for (x = 0; x < size; x++)
	{
		printf("Element %d: ", x);

		obj = PyList_GetItem(p, x);
		printf("%s\n", Py_TYPE(obj)->tp_name);
	}
}
