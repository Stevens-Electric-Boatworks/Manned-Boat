// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from boat_data_interfaces:msg/MotionData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "boat_data_interfaces/msg/detail/motion_data__struct.h"
#include "boat_data_interfaces/msg/detail/motion_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool boat_data_interfaces__msg__motion_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("boat_data_interfaces.msg._motion_data", (char *)PyUnicode_1BYTE_DATA(module_attr), 37) == 0);
    assert(strncmp("MotionData", (char *)PyUnicode_1BYTE_DATA(name_attr), 10) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  boat_data_interfaces__msg__MotionData * ros_message = _ros_message;
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->heading = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_lat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_long
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_long");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_long = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_alt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_alt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * boat_data_interfaces__msg__motion_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotionData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("boat_data_interfaces.msg._motion_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotionData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  boat_data_interfaces__msg__MotionData * ros_message = (boat_data_interfaces__msg__MotionData *)raw_ros_message;
  {  // heading
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_long
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_long);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_long", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_alt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
