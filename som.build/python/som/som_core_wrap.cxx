#include<array>
#include<complex>
#include<string>
#include<iostream> //for std::cout...
#include<cstddef>
using dcomplex = std::complex<double>;

// C.f. https://numpy.org/doc/1.21/reference/c-api/array.html#importing-the-api
#define PY_ARRAY_UNIQUE_SYMBOL _cpp2py_ARRAY_API

// first the basic stuff
#include <cpp2py/cpp2py.hpp>
#include <cpp2py/converters/string.hpp>

// for converters
#include <cpp2py/converters/vector.hpp>
#include <cpp2py/converters/string.hpp>
#include <cpp2py/converters/function.hpp>
#include <algorithm>


//------------------------------------------------------------------------------------------------------
//---------------------   includes and using  -------------------
//------------------------------------------------------------------------------------------------------
#define TRIQS_PYTHON_WRAPPER_MODULE_som_core

#include "som/som_core/som_core.hpp"




using namespace cpp2py;


#include <cpp2py/converters/optional.hpp>
#include <cpp2py/converters/pair.hpp>
#include <cpp2py/converters/tuple.hpp>
#include <cpp2py/converters/variant.hpp>
#include <cpp2py/converters/vector.hpp>
#include <cpp2py/converters/function.hpp>
#include <nda_py/cpp2py_converters.hpp>
#include <triqs/cpp2py_converters/gf.hpp>
using namespace nda;
using namespace triqs::mesh;
using namespace triqs::stat;
using namespace som;






//------------------------------------------------------------------------------------------------------
// Second all the classes and enums wrapped by imported modules
// Most converters will be automatically included
//------------------------------------------------------------------------------------------------------



//------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------

//--------------------- Generated converters --------------------------

 namespace cpp2py { 

template <> struct py_converter<som::adjust_f_parameters_t> {
 static PyObject *c2py(som::adjust_f_parameters_t & x) {
  pyref d = PyDict_New();
  PyObject * p;
  p = convert_to_python(x.energy_window);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "energy_window", p);
  p = convert_to_python(x.max_time);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "max_time", p);
  p = convert_to_python(x.verbosity);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "verbosity", p);
  p = convert_to_python(x.t);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "t", p);
  p = convert_to_python(x.cc_update);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update", p);
  p = convert_to_python(x.random_seed);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "random_seed", p);
  p = convert_to_python(x.random_name);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "random_name", p);
  p = convert_to_python(x.max_rects);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "max_rects", p);
  p = convert_to_python(x.min_rect_width);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "min_rect_width", p);
  p = convert_to_python(x.min_rect_weight);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "min_rect_weight", p);
  p = convert_to_python(x.t1);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "t1", p);
  p = convert_to_python(x.distrib_d_max);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "distrib_d_max", p);
  p = convert_to_python(x.gamma);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "gamma", p);
  p = convert_to_python(x.cc_update_cycle_length);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_cycle_length", p);
  p = convert_to_python(x.cc_update_max_iter);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_max_iter", p);
  p = convert_to_python(x.cc_update_rect_norm_variation_tol);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_rect_norm_variation_tol", p);
  p = convert_to_python(x.cc_update_height_penalty_max);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_height_penalty_max", p);
  p = convert_to_python(x.cc_update_height_penalty_divisor);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_height_penalty_divisor", p);
  p = convert_to_python(x.cc_update_der_penalty_init);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_der_penalty_init", p);
  p = convert_to_python(x.cc_update_der_penalty_threshold);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_der_penalty_threshold", p);
  p = convert_to_python(x.cc_update_der_penalty_increase_coeff);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_der_penalty_increase_coeff", p);
  p = convert_to_python(x.cc_update_der_penalty_limiter);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_der_penalty_limiter", p);
  p = convert_to_python(x.f_range);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "f_range", p);
  p = convert_to_python(x.l);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "l", p);
  p = convert_to_python(x.kappa);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "kappa", p);
  return d.new_ref();
 }

 static PyObject *c2py(som::adjust_f_parameters_t && x) {
   return c2py(x);
 }

 template <typename T, typename U> static void _get_optional(PyObject *dic, const char *name, T &r, U const &init_default) {
  if (PyDict_Contains(dic, pyref::string(name)))
   r = convert_from_python<T>(PyDict_GetItemString(dic, name));
  else
   r = init_default;
 }

 template <typename T> static void _get_optional(PyObject *dic, const char *name, T &r) {
  if (PyDict_Contains(dic, pyref::string(name)))
   r = convert_from_python<T>(PyDict_GetItemString(dic, name));
  else
   r = T{};
 }

 static som::adjust_f_parameters_t py2c(PyObject *dic) {
  som::adjust_f_parameters_t res;
  res.energy_window = convert_from_python<std::pair<double,double>>(PyDict_GetItemString(dic, "energy_window"));
  _get_optional(dic, "max_time", res.max_time ,-1);
  _get_optional(dic, "verbosity", res.verbosity ,((mpi::communicator().rank() == 0) ? 2 : 0));
  _get_optional(dic, "t", res.t ,50);
  _get_optional(dic, "cc_update", res.cc_update ,false);
  _get_optional(dic, "random_seed", res.random_seed ,34788 + 928374 * mpi::communicator().rank());
  _get_optional(dic, "random_name", res.random_name ,"");
  _get_optional(dic, "max_rects", res.max_rects ,60);
  _get_optional(dic, "min_rect_width", res.min_rect_width ,1e-3);
  _get_optional(dic, "min_rect_weight", res.min_rect_weight ,1e-3);
  _get_optional(dic, "t1", res.t1 ,-1);
  _get_optional(dic, "distrib_d_max", res.distrib_d_max ,2);
  _get_optional(dic, "gamma", res.gamma ,2);
  _get_optional(dic, "cc_update_cycle_length", res.cc_update_cycle_length ,10);
  _get_optional(dic, "cc_update_max_iter", res.cc_update_max_iter ,30);
  _get_optional(dic, "cc_update_rect_norm_variation_tol", res.cc_update_rect_norm_variation_tol ,1e-3);
  _get_optional(dic, "cc_update_height_penalty_max", res.cc_update_height_penalty_max ,1e3);
  _get_optional(dic, "cc_update_height_penalty_divisor", res.cc_update_height_penalty_divisor ,10);
  _get_optional(dic, "cc_update_der_penalty_init", res.cc_update_der_penalty_init ,1.0);
  _get_optional(dic, "cc_update_der_penalty_threshold", res.cc_update_der_penalty_threshold ,0.1);
  _get_optional(dic, "cc_update_der_penalty_increase_coeff", res.cc_update_der_penalty_increase_coeff ,2.0);
  _get_optional(dic, "cc_update_der_penalty_limiter", res.cc_update_der_penalty_limiter ,1e3);
  _get_optional(dic, "f_range", res.f_range ,std::pair<int,int>{100,5000});
  _get_optional(dic, "l", res.l ,20);
  _get_optional(dic, "kappa", res.kappa ,0.25);
  return res;
 }

 template <typename T>
 static void _check(PyObject *dic, std::stringstream &fs, int &err, const char *name, const char *tname) {
  if (!convertible_from_python<T>(PyDict_GetItemString(dic, name), false))
   fs << "\n" << ++err << " The parameter " << name << " does not have the right type : expecting " << tname
      << " in C++, but got '" << Py_TYPE(PyDict_GetItemString(dic, name))->tp_name << "' in Python.";
 }

 template <typename T>
 static void _check_mandatory(PyObject *dic, std::stringstream &fs, int &err, const char *name, const char *tname) {
  if (!PyDict_Contains(dic, pyref::string(name)))
   fs << "\n" << ++err << " Mandatory parameter " << name << " is missing.";
  else _check<T>(dic,fs,err,name,tname);
 }

 template <typename T>
 static void _check_optional(PyObject *dic, std::stringstream &fs, int &err, const char *name, const char *tname) {
  if (PyDict_Contains(dic, pyref::string(name))) _check<T>(dic, fs, err, name, tname);
 }

 static bool is_convertible(PyObject *dic, bool raise_exception) {
  if (dic == nullptr or !PyDict_Check(dic)) {
   if (raise_exception) { PyErr_SetString(PyExc_TypeError, "The function must be called with named arguments");}
   return false;
  }  
  std::stringstream fs, fs2; int err=0;

  // FIXME : constexpr bool
#ifndef TRIQS_ALLOW_UNUSED_PARAMETERS
  std::vector<std::string> ks, all_keys = {"energy_window","max_time","verbosity","t","cc_update","random_seed","random_name","max_rects","min_rect_width","min_rect_weight","t1","distrib_d_max","gamma","cc_update_cycle_length","cc_update_max_iter","cc_update_rect_norm_variation_tol","cc_update_height_penalty_max","cc_update_height_penalty_divisor","cc_update_der_penalty_init","cc_update_der_penalty_threshold","cc_update_der_penalty_increase_coeff","cc_update_der_penalty_limiter","f_range","l","kappa"};
  pyref keys = PyDict_Keys(dic);
  if (!convertible_from_python<std::vector<std::string>>(keys, true)) {
   fs << "\nThe dict keys are not strings";
   goto _error;
  }
  ks = convert_from_python<std::vector<std::string>>(keys);
  for (auto & k : ks)
   if (std::find(all_keys.begin(), all_keys.end(), k) == all_keys.end())
    fs << "\n"<< ++err << " The parameter '" << k << "' is not recognized.";
#endif

  _check_mandatory<std::pair<double,double>>(dic, fs, err, "energy_window", "std::pair<double,double>"); 
  _check_optional <int>(dic, fs, err, "max_time", "int");
  _check_optional <int>(dic, fs, err, "verbosity", "int");
  _check_optional <int>(dic, fs, err, "t", "int");
  _check_optional <bool>(dic, fs, err, "cc_update", "bool");
  _check_optional <int>(dic, fs, err, "random_seed", "int");
  _check_optional <std::string>(dic, fs, err, "random_name", "std::string");
  _check_optional <int>(dic, fs, err, "max_rects", "int");
  _check_optional <double>(dic, fs, err, "min_rect_width", "double");
  _check_optional <double>(dic, fs, err, "min_rect_weight", "double");
  _check_optional <int>(dic, fs, err, "t1", "int");
  _check_optional <double>(dic, fs, err, "distrib_d_max", "double");
  _check_optional <double>(dic, fs, err, "gamma", "double");
  _check_optional <int>(dic, fs, err, "cc_update_cycle_length", "int");
  _check_optional <int>(dic, fs, err, "cc_update_max_iter", "int");
  _check_optional <double>(dic, fs, err, "cc_update_rect_norm_variation_tol", "double");
  _check_optional <double>(dic, fs, err, "cc_update_height_penalty_max", "double");
  _check_optional <double>(dic, fs, err, "cc_update_height_penalty_divisor", "double");
  _check_optional <double>(dic, fs, err, "cc_update_der_penalty_init", "double");
  _check_optional <double>(dic, fs, err, "cc_update_der_penalty_threshold", "double");
  _check_optional <double>(dic, fs, err, "cc_update_der_penalty_increase_coeff", "double");
  _check_optional <double>(dic, fs, err, "cc_update_der_penalty_limiter", "double");
  _check_optional <std::pair<int,int>>(dic, fs, err, "f_range", "std::pair<int,int>");
  _check_optional <int>(dic, fs, err, "l", "int");
  _check_optional <double>(dic, fs, err, "kappa", "double");
  if (err) goto _error;
  return true;
  
 _error: 
   fs2 << "\n---- There " << (err > 1 ? "are " : "is ") << err<< " error"<<(err >1 ?"s" : "")<< " in Python -> C++ transcription for the class som::adjust_f_parameters_t\n" <<fs.str();
   if (raise_exception) PyErr_SetString(PyExc_TypeError, fs2.str().c_str());
  return false;
 }
};

}

 namespace cpp2py { 

template <> struct py_converter<som::accumulate_parameters_t> {
 static PyObject *c2py(som::accumulate_parameters_t & x) {
  pyref d = PyDict_New();
  PyObject * p;
  p = convert_to_python(x.energy_window);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "energy_window", p);
  p = convert_to_python(x.max_time);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "max_time", p);
  p = convert_to_python(x.verbosity);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "verbosity", p);
  p = convert_to_python(x.t);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "t", p);
  p = convert_to_python(x.cc_update);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update", p);
  p = convert_to_python(x.random_seed);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "random_seed", p);
  p = convert_to_python(x.random_name);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "random_name", p);
  p = convert_to_python(x.max_rects);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "max_rects", p);
  p = convert_to_python(x.min_rect_width);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "min_rect_width", p);
  p = convert_to_python(x.min_rect_weight);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "min_rect_weight", p);
  p = convert_to_python(x.t1);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "t1", p);
  p = convert_to_python(x.distrib_d_max);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "distrib_d_max", p);
  p = convert_to_python(x.gamma);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "gamma", p);
  p = convert_to_python(x.cc_update_cycle_length);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_cycle_length", p);
  p = convert_to_python(x.cc_update_max_iter);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_max_iter", p);
  p = convert_to_python(x.cc_update_rect_norm_variation_tol);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_rect_norm_variation_tol", p);
  p = convert_to_python(x.cc_update_height_penalty_max);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_height_penalty_max", p);
  p = convert_to_python(x.cc_update_height_penalty_divisor);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_height_penalty_divisor", p);
  p = convert_to_python(x.cc_update_der_penalty_init);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_der_penalty_init", p);
  p = convert_to_python(x.cc_update_der_penalty_threshold);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_der_penalty_threshold", p);
  p = convert_to_python(x.cc_update_der_penalty_increase_coeff);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_der_penalty_increase_coeff", p);
  p = convert_to_python(x.cc_update_der_penalty_limiter);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "cc_update_der_penalty_limiter", p);
  p = convert_to_python(x.t);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "t", p);
  p = convert_to_python(x.f);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "f", p);
  p = convert_to_python(x.l);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "l", p);
  p = convert_to_python(x.adjust_l);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "adjust_l", p);
  p = convert_to_python(x.make_histograms);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "make_histograms", p);
  p = convert_to_python(x.adjust_l_range);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "adjust_l_range", p);
  p = convert_to_python(x.adjust_l_good_chi);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "adjust_l_good_chi", p);
  p = convert_to_python(x.adjust_l_verygood_chi);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "adjust_l_verygood_chi", p);
  p = convert_to_python(x.adjust_l_ratio);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "adjust_l_ratio", p);
  p = convert_to_python(x.hist_max);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "hist_max", p);
  p = convert_to_python(x.hist_n_bins);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "hist_n_bins", p);
  return d.new_ref();
 }

 static PyObject *c2py(som::accumulate_parameters_t && x) {
   return c2py(x);
 }

 template <typename T, typename U> static void _get_optional(PyObject *dic, const char *name, T &r, U const &init_default) {
  if (PyDict_Contains(dic, pyref::string(name)))
   r = convert_from_python<T>(PyDict_GetItemString(dic, name));
  else
   r = init_default;
 }

 template <typename T> static void _get_optional(PyObject *dic, const char *name, T &r) {
  if (PyDict_Contains(dic, pyref::string(name)))
   r = convert_from_python<T>(PyDict_GetItemString(dic, name));
  else
   r = T{};
 }

 static som::accumulate_parameters_t py2c(PyObject *dic) {
  som::accumulate_parameters_t res;
  res.energy_window = convert_from_python<std::pair<double,double>>(PyDict_GetItemString(dic, "energy_window"));
  _get_optional(dic, "max_time", res.max_time ,-1);
  _get_optional(dic, "verbosity", res.verbosity ,((mpi::communicator().rank() == 0) ? 2 : 0));
  _get_optional(dic, "t", res.t ,50);
  _get_optional(dic, "cc_update", res.cc_update ,false);
  _get_optional(dic, "random_seed", res.random_seed ,34788 + 928374 * mpi::communicator().rank());
  _get_optional(dic, "random_name", res.random_name ,"");
  _get_optional(dic, "max_rects", res.max_rects ,60);
  _get_optional(dic, "min_rect_width", res.min_rect_width ,1e-3);
  _get_optional(dic, "min_rect_weight", res.min_rect_weight ,1e-3);
  _get_optional(dic, "t1", res.t1 ,-1);
  _get_optional(dic, "distrib_d_max", res.distrib_d_max ,2);
  _get_optional(dic, "gamma", res.gamma ,2);
  _get_optional(dic, "cc_update_cycle_length", res.cc_update_cycle_length ,10);
  _get_optional(dic, "cc_update_max_iter", res.cc_update_max_iter ,30);
  _get_optional(dic, "cc_update_rect_norm_variation_tol", res.cc_update_rect_norm_variation_tol ,1e-3);
  _get_optional(dic, "cc_update_height_penalty_max", res.cc_update_height_penalty_max ,1e3);
  _get_optional(dic, "cc_update_height_penalty_divisor", res.cc_update_height_penalty_divisor ,10);
  _get_optional(dic, "cc_update_der_penalty_init", res.cc_update_der_penalty_init ,1.0);
  _get_optional(dic, "cc_update_der_penalty_threshold", res.cc_update_der_penalty_threshold ,0.1);
  _get_optional(dic, "cc_update_der_penalty_increase_coeff", res.cc_update_der_penalty_increase_coeff ,2.0);
  _get_optional(dic, "cc_update_der_penalty_limiter", res.cc_update_der_penalty_limiter ,1e3);
  _get_optional(dic, "t", res.t ,50);
  _get_optional(dic, "f", res.f ,100);
  _get_optional(dic, "l", res.l ,2000);
  _get_optional(dic, "adjust_l", res.adjust_l ,false);
  _get_optional(dic, "make_histograms", res.make_histograms ,false);
  _get_optional(dic, "adjust_l_range", res.adjust_l_range ,std::pair<int,int>{100,2000});
  _get_optional(dic, "adjust_l_good_chi", res.adjust_l_good_chi ,2.0);
  _get_optional(dic, "adjust_l_verygood_chi", res.adjust_l_verygood_chi ,4.0/3.0);
  _get_optional(dic, "adjust_l_ratio", res.adjust_l_ratio ,0.95);
  _get_optional(dic, "hist_max", res.hist_max ,2.0);
  _get_optional(dic, "hist_n_bins", res.hist_n_bins ,100);
  return res;
 }

 template <typename T>
 static void _check(PyObject *dic, std::stringstream &fs, int &err, const char *name, const char *tname) {
  if (!convertible_from_python<T>(PyDict_GetItemString(dic, name), false))
   fs << "\n" << ++err << " The parameter " << name << " does not have the right type : expecting " << tname
      << " in C++, but got '" << Py_TYPE(PyDict_GetItemString(dic, name))->tp_name << "' in Python.";
 }

 template <typename T>
 static void _check_mandatory(PyObject *dic, std::stringstream &fs, int &err, const char *name, const char *tname) {
  if (!PyDict_Contains(dic, pyref::string(name)))
   fs << "\n" << ++err << " Mandatory parameter " << name << " is missing.";
  else _check<T>(dic,fs,err,name,tname);
 }

 template <typename T>
 static void _check_optional(PyObject *dic, std::stringstream &fs, int &err, const char *name, const char *tname) {
  if (PyDict_Contains(dic, pyref::string(name))) _check<T>(dic, fs, err, name, tname);
 }

 static bool is_convertible(PyObject *dic, bool raise_exception) {
  if (dic == nullptr or !PyDict_Check(dic)) {
   if (raise_exception) { PyErr_SetString(PyExc_TypeError, "The function must be called with named arguments");}
   return false;
  }  
  std::stringstream fs, fs2; int err=0;

  // FIXME : constexpr bool
#ifndef TRIQS_ALLOW_UNUSED_PARAMETERS
  std::vector<std::string> ks, all_keys = {"energy_window","max_time","verbosity","t","cc_update","random_seed","random_name","max_rects","min_rect_width","min_rect_weight","t1","distrib_d_max","gamma","cc_update_cycle_length","cc_update_max_iter","cc_update_rect_norm_variation_tol","cc_update_height_penalty_max","cc_update_height_penalty_divisor","cc_update_der_penalty_init","cc_update_der_penalty_threshold","cc_update_der_penalty_increase_coeff","cc_update_der_penalty_limiter","t","f","l","adjust_l","make_histograms","adjust_l_range","adjust_l_good_chi","adjust_l_verygood_chi","adjust_l_ratio","hist_max","hist_n_bins"};
  pyref keys = PyDict_Keys(dic);
  if (!convertible_from_python<std::vector<std::string>>(keys, true)) {
   fs << "\nThe dict keys are not strings";
   goto _error;
  }
  ks = convert_from_python<std::vector<std::string>>(keys);
  for (auto & k : ks)
   if (std::find(all_keys.begin(), all_keys.end(), k) == all_keys.end())
    fs << "\n"<< ++err << " The parameter '" << k << "' is not recognized.";
#endif

  _check_mandatory<std::pair<double,double>>(dic, fs, err, "energy_window", "std::pair<double,double>"); 
  _check_optional <int>(dic, fs, err, "max_time", "int");
  _check_optional <int>(dic, fs, err, "verbosity", "int");
  _check_optional <int>(dic, fs, err, "t", "int");
  _check_optional <bool>(dic, fs, err, "cc_update", "bool");
  _check_optional <int>(dic, fs, err, "random_seed", "int");
  _check_optional <std::string>(dic, fs, err, "random_name", "std::string");
  _check_optional <int>(dic, fs, err, "max_rects", "int");
  _check_optional <double>(dic, fs, err, "min_rect_width", "double");
  _check_optional <double>(dic, fs, err, "min_rect_weight", "double");
  _check_optional <int>(dic, fs, err, "t1", "int");
  _check_optional <double>(dic, fs, err, "distrib_d_max", "double");
  _check_optional <double>(dic, fs, err, "gamma", "double");
  _check_optional <int>(dic, fs, err, "cc_update_cycle_length", "int");
  _check_optional <int>(dic, fs, err, "cc_update_max_iter", "int");
  _check_optional <double>(dic, fs, err, "cc_update_rect_norm_variation_tol", "double");
  _check_optional <double>(dic, fs, err, "cc_update_height_penalty_max", "double");
  _check_optional <double>(dic, fs, err, "cc_update_height_penalty_divisor", "double");
  _check_optional <double>(dic, fs, err, "cc_update_der_penalty_init", "double");
  _check_optional <double>(dic, fs, err, "cc_update_der_penalty_threshold", "double");
  _check_optional <double>(dic, fs, err, "cc_update_der_penalty_increase_coeff", "double");
  _check_optional <double>(dic, fs, err, "cc_update_der_penalty_limiter", "double");
  _check_optional <int>(dic, fs, err, "t", "int");
  _check_optional <int>(dic, fs, err, "f", "int");
  _check_optional <int>(dic, fs, err, "l", "int");
  _check_optional <bool>(dic, fs, err, "adjust_l", "bool");
  _check_optional <bool>(dic, fs, err, "make_histograms", "bool");
  _check_optional <std::pair<int,int>>(dic, fs, err, "adjust_l_range", "std::pair<int,int>");
  _check_optional <double>(dic, fs, err, "adjust_l_good_chi", "double");
  _check_optional <double>(dic, fs, err, "adjust_l_verygood_chi", "double");
  _check_optional <double>(dic, fs, err, "adjust_l_ratio", "double");
  _check_optional <double>(dic, fs, err, "hist_max", "double");
  _check_optional <int>(dic, fs, err, "hist_n_bins", "int");
  if (err) goto _error;
  return true;
  
 _error: 
   fs2 << "\n---- There " << (err > 1 ? "are " : "is ") << err<< " error"<<(err >1 ?"s" : "")<< " in Python -> C++ transcription for the class som::accumulate_parameters_t\n" <<fs.str();
   if (raise_exception) PyErr_SetString(PyExc_TypeError, fs2.str().c_str());
  return false;
 }
};

}

 namespace cpp2py { 

template <> struct py_converter<som::final_solution_cc_parameters_t> {
 static PyObject *c2py(som::final_solution_cc_parameters_t & x) {
  pyref d = PyDict_New();
  PyObject * p;
  p = convert_to_python(x.refreq_mesh);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "refreq_mesh", p);
  p = convert_to_python(x.verbosity);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "verbosity", p);
  p = convert_to_python(x.good_chi_rel);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "good_chi_rel", p);
  p = convert_to_python(x.good_chi_abs);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "good_chi_abs", p);
  p = convert_to_python(x.default_model);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "default_model", p);
  p = convert_to_python(x.default_model_weights);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "default_model_weights", p);
  p = convert_to_python(x.max_iter);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "max_iter", p);
  p = convert_to_python(x.max_sum_abs_c);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "max_sum_abs_c", p);
  p = convert_to_python(x.ew_penalty_coeff);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "ew_penalty_coeff", p);
  p = convert_to_python(x.amp_penalty_max);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "amp_penalty_max", p);
  p = convert_to_python(x.amp_penalty_divisor);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "amp_penalty_divisor", p);
  p = convert_to_python(x.der_penalty_init);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "der_penalty_init", p);
  p = convert_to_python(x.der_penalty_coeff);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "der_penalty_coeff", p);
  p = convert_to_python(x.monitor);
  if(p == nullptr) return nullptr;
  PyDict_SetItemString((PyObject *)d, "monitor", p);
  return d.new_ref();
 }

 static PyObject *c2py(som::final_solution_cc_parameters_t && x) {
   return c2py(x);
 }

 template <typename T, typename U> static void _get_optional(PyObject *dic, const char *name, T &r, U const &init_default) {
  if (PyDict_Contains(dic, pyref::string(name)))
   r = convert_from_python<T>(PyDict_GetItemString(dic, name));
  else
   r = init_default;
 }

 template <typename T> static void _get_optional(PyObject *dic, const char *name, T &r) {
  if (PyDict_Contains(dic, pyref::string(name)))
   r = convert_from_python<T>(PyDict_GetItemString(dic, name));
  else
   r = T{};
 }

 static som::final_solution_cc_parameters_t py2c(PyObject *dic) {
  som::final_solution_cc_parameters_t res;
  res.refreq_mesh = convert_from_python<std::variant<triqs::mesh::refreq, nda::array<double, 1>>>(PyDict_GetItemString(dic, "refreq_mesh"));
  _get_optional(dic, "verbosity", res.verbosity ,((mpi::communicator().rank() == 0) ? 1 : 0));
  _get_optional(dic, "good_chi_rel", res.good_chi_rel ,2.0);
  _get_optional(dic, "good_chi_abs", res.good_chi_abs ,HUGE_VAL);
  _get_optional(dic, "default_model", res.default_model );
  _get_optional(dic, "default_model_weights", res.default_model_weights );
  _get_optional(dic, "max_iter", res.max_iter ,50);
  _get_optional(dic, "max_sum_abs_c", res.max_sum_abs_c ,2.0);
  _get_optional(dic, "ew_penalty_coeff", res.ew_penalty_coeff ,1);
  _get_optional(dic, "amp_penalty_max", res.amp_penalty_max ,1e3);
  _get_optional(dic, "amp_penalty_divisor", res.amp_penalty_divisor ,10);
  _get_optional(dic, "der_penalty_init", res.der_penalty_init ,0.1);
  _get_optional(dic, "der_penalty_coeff", res.der_penalty_coeff ,2.0);
  _get_optional(dic, "monitor", res.monitor );
  return res;
 }

 template <typename T>
 static void _check(PyObject *dic, std::stringstream &fs, int &err, const char *name, const char *tname) {
  if (!convertible_from_python<T>(PyDict_GetItemString(dic, name), false))
   fs << "\n" << ++err << " The parameter " << name << " does not have the right type : expecting " << tname
      << " in C++, but got '" << Py_TYPE(PyDict_GetItemString(dic, name))->tp_name << "' in Python.";
 }

 template <typename T>
 static void _check_mandatory(PyObject *dic, std::stringstream &fs, int &err, const char *name, const char *tname) {
  if (!PyDict_Contains(dic, pyref::string(name)))
   fs << "\n" << ++err << " Mandatory parameter " << name << " is missing.";
  else _check<T>(dic,fs,err,name,tname);
 }

 template <typename T>
 static void _check_optional(PyObject *dic, std::stringstream &fs, int &err, const char *name, const char *tname) {
  if (PyDict_Contains(dic, pyref::string(name))) _check<T>(dic, fs, err, name, tname);
 }

 static bool is_convertible(PyObject *dic, bool raise_exception) {
  if (dic == nullptr or !PyDict_Check(dic)) {
   if (raise_exception) { PyErr_SetString(PyExc_TypeError, "The function must be called with named arguments");}
   return false;
  }  
  std::stringstream fs, fs2; int err=0;

  // FIXME : constexpr bool
#ifndef TRIQS_ALLOW_UNUSED_PARAMETERS
  std::vector<std::string> ks, all_keys = {"refreq_mesh","verbosity","good_chi_rel","good_chi_abs","default_model","default_model_weights","max_iter","max_sum_abs_c","ew_penalty_coeff","amp_penalty_max","amp_penalty_divisor","der_penalty_init","der_penalty_coeff","monitor"};
  pyref keys = PyDict_Keys(dic);
  if (!convertible_from_python<std::vector<std::string>>(keys, true)) {
   fs << "\nThe dict keys are not strings";
   goto _error;
  }
  ks = convert_from_python<std::vector<std::string>>(keys);
  for (auto & k : ks)
   if (std::find(all_keys.begin(), all_keys.end(), k) == all_keys.end())
    fs << "\n"<< ++err << " The parameter '" << k << "' is not recognized.";
#endif

  _check_mandatory<std::variant<triqs::mesh::refreq, nda::array<double, 1>>>(dic, fs, err, "refreq_mesh", "std::variant<triqs::mesh::refreq, nda::array<double, 1>>"); 
  _check_optional <int>(dic, fs, err, "verbosity", "int");
  _check_optional <double>(dic, fs, err, "good_chi_rel", "double");
  _check_optional <double>(dic, fs, err, "good_chi_abs", "double");
  _check_optional <nda::array<double, 1>>(dic, fs, err, "default_model", "nda::array<double, 1>");
  _check_optional <nda::array<double, 1>>(dic, fs, err, "default_model_weights", "nda::array<double, 1>");
  _check_optional <int>(dic, fs, err, "max_iter", "int");
  _check_optional <double>(dic, fs, err, "max_sum_abs_c", "double");
  _check_optional <double>(dic, fs, err, "ew_penalty_coeff", "double");
  _check_optional <double>(dic, fs, err, "amp_penalty_max", "double");
  _check_optional <double>(dic, fs, err, "amp_penalty_divisor", "double");
  _check_optional <double>(dic, fs, err, "der_penalty_init", "double");
  _check_optional <double>(dic, fs, err, "der_penalty_coeff", "double");
  _check_optional <som::final_solution_cc_parameters_t::monitor_t>(dic, fs, err, "monitor", "som::final_solution_cc_parameters_t::monitor_t");
  if (err) goto _error;
  return true;
  
 _error: 
   fs2 << "\n---- There " << (err > 1 ? "are " : "is ") << err<< " error"<<(err >1 ?"s" : "")<< " in Python -> C++ transcription for the class som::final_solution_cc_parameters_t\n" <<fs.str();
   if (raise_exception) PyErr_SetString(PyExc_TypeError, fs2.str().c_str());
  return false;
 }
};

}


// We use the order, in the following order (which is necessary for compilation : we need the converters in the implementations)
// - function/method declaration
// - implement type, and all tables
// - implement the converter of types, then of associated regular_type if any.
// - implement functions/method.
//
//----------------------------------------------------------------
//---------------------  function declarations -------------------
//----------------------------------------------------------------

//--------------------- all functions/methods with args, kwds, including constructors -----------------------------

 static PyObject* som_core_fill_refreq(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* som_core_compute_tail(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* som_core_reconstruct(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* Rectangle___call__(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* Configuration___write_hdf5__(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* Configuration___getitem__impl(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* Configuration___call__(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* SomCore_adjust_f(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* SomCore_accumulate(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* SomCore_run(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* SomCore_compute_final_solution(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* SomCore_compute_final_solution_cc(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* SomCore_clear(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* SomCore_particular_solutions(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* SomCore_solution(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* SomCore_objf(PyObject *self, PyObject *args, PyObject *keywds);
 static PyObject* SomCore_histogram(PyObject *self, PyObject *args, PyObject *keywds);
 static int SomCore___init__(PyObject *self, PyObject *args, PyObject *keywds);

// ------------------------------- Loop on all classes ----------------------------------------------------


// ----------------------------
// start class : Rectangle
// ----------------------------
//--------------------- all members  -----------------------------


//--------------------- all properties  -----------------------------

static PyObject * Rectangle__get_prop_center (PyObject *self, void *closure);
static PyObject * Rectangle__get_prop_width (PyObject *self, void *closure);
static PyObject * Rectangle__get_prop_height (PyObject *self, void *closure);
static PyObject * Rectangle__get_prop_norm (PyObject *self, void *closure);

//--------------------- [] -----------------------------





//--------------------- reduce  -----------------------------

static PyObject* Rectangle___reduce__ (PyObject *self, PyObject *args, PyObject *keywds);

//--------------------- hdf5 : write part -----------------------------

static PyObject* Rectangle___write_hdf5__ (PyObject *self, PyObject *args);

//--------------------- repr  -----------------------------

static PyObject* Rectangle___repr__ (PyObject *self);
static PyObject* Rectangle___str__ (PyObject *self);

//--------------------- Arithmetic declaration only -----------------------------


//--------------------- Comparison  -----------------------------

static PyObject* Rectangle_richcompare (PyObject *a, PyObject *b, int op);

// ----------------------------
// stop class : Rectangle
// ----------------------------

// ----------------------------
// start class : Configuration
// ----------------------------
//--------------------- all members  -----------------------------


//--------------------- all properties  -----------------------------

static PyObject * Configuration__get_prop_norm (PyObject *self, void *closure);

//--------------------- [] -----------------------------

static Py_ssize_t Configuration___len__(PyObject *self);

static PyObject* Configuration___getitem__(PyObject *self, PyObject *key);



//--------------------- reduce  -----------------------------

static PyObject* Configuration___reduce__ (PyObject *self, PyObject *args, PyObject *keywds);

//--------------------- hdf5 : write part -----------------------------

static PyObject* Configuration___write_hdf5__ (PyObject *self, PyObject *args);

//--------------------- repr  -----------------------------

static PyObject* Configuration___repr__ (PyObject *self);
static PyObject* Configuration___str__ (PyObject *self);

//--------------------- Arithmetic declaration only -----------------------------


//--------------------- Comparison  -----------------------------

static PyObject* Configuration_richcompare (PyObject *a, PyObject *b, int op);

// ----------------------------
// stop class : Configuration
// ----------------------------

// ----------------------------
// start class : SomCore
// ----------------------------
//--------------------- all members  -----------------------------


//--------------------- all properties  -----------------------------

static PyObject * SomCore__get_prop_solutions (PyObject *self, void *closure);
static PyObject * SomCore__get_prop_objf_list (PyObject *self, void *closure);
static PyObject * SomCore__get_prop_histograms (PyObject *self, void *closure);
static PyObject * SomCore__get_prop_observable_kind (PyObject *self, void *closure);
static PyObject * SomCore__get_prop_dim (PyObject *self, void *closure);
static PyObject * SomCore__get_prop_last_accumulate_parameters (PyObject *self, void *closure);
static PyObject * SomCore__get_prop_accumulate_status (PyObject *self, void *closure);
static PyObject * SomCore__get_prop_objf_min (PyObject *self, void *closure);

//--------------------- [] -----------------------------





//--------------------- reduce  -----------------------------

static PyObject* SomCore___reduce__ (PyObject *self, PyObject *args, PyObject *keywds);

//--------------------- hdf5 : write part -----------------------------

static PyObject* SomCore___write_hdf5__ (PyObject *self, PyObject *args);

//--------------------- repr  -----------------------------


//--------------------- Arithmetic declaration only -----------------------------


//--------------------- Comparison  -----------------------------

static PyObject* SomCore_richcompare (PyObject *a, PyObject *b, int op);

// ----------------------------
// stop class : SomCore
// ----------------------------

//----------------------------------------------------------------
//---------------------  implementation --------------------------
//----------------------------------------------------------------

// ------------------------------- Loop on all classes ----------------------------------------------------

// ----------------------------
// start class : Rectangle
// ----------------------------

//--------------------- define all the types and the converter functions -----------------------------


 // the python type
typedef struct {
    PyObject_HEAD
    rectangle * _c;
} Rectangle;


// dealloc
static void Rectangle_dealloc(PyObject* self) {
  auto * c_ptr = ((Rectangle*)self)->_c;
  if (c_ptr != NULL) delete c_ptr; // should never be null, but I protect it anyway
  Py_TYPE(self)->tp_free((PyObject*)self);
}

//--------------------- Iterator by wrapping the C++ -----------------------------


//--------------------- Register as_number  -----------------------------


//--------------------- Register as_mapping  -----------------------------


//--------------------- Register members and properties -----------------------------

static PyGetSetDef Rectangle_getseters[] = {




{"center", (getter)Rectangle__get_prop_center, NULL, "   float: Center of the rectangle :math:`c`.", NULL},
{"width", (getter)Rectangle__get_prop_width, NULL, "   float: Width of the rectangle :math:`w`.", NULL},
{"height", (getter)Rectangle__get_prop_height, NULL, "   float: Height of the rectangle :math:`h`.", NULL},
{"norm", (getter)Rectangle__get_prop_norm, NULL, "   float: Norm (area) of the rectangle :math:`hw`.", NULL},

{NULL}  /* Sentinel */
};

//--------------------- Register the methods for the types  -----------------------------

static PyMethodDef Rectangle_methods[] = {
    {"__reduce__", (PyCFunction)Rectangle___reduce__, METH_VARARGS, "Internal  " },
    {"__write_hdf5__", (PyCFunction)Rectangle___write_hdf5__, METH_VARARGS, "Internal : hdf5 writing via C++ " },
{NULL}  /* Sentinel */
};

//--------------------- The xxxType table  -----------------------------

static PyTypeObject RectangleType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "som.som_core.Rectangle",/*tp_name*/
    sizeof(Rectangle),             /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    (destructor)Rectangle_dealloc, /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    0,                         /*tp_compare*/
    &Rectangle___repr__,           /*tp_repr*/
    0,       /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,    /*tp_as_mapping*/
    0,                         /*tp_hash */
    Rectangle___call__,                         /*tp_call*/
    &Rectangle___str__,                         /*tp_str*/
    0,                         /*tp_getattro*/
    0,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    "The rectangular function of energy, basis element of a spectral function.", /* tp_doc */
    0,		               /* tp_traverse */
    0,		               /* tp_clear */
    Rectangle_richcompare,  /* tp_richcompare */
    0,		               /* tp_weaklistoffset */
    0,		               /* tp_iter */
    0,		               /* tp_iternext */
    Rectangle_methods,             /* tp_methods */
    0,              /* tp_members */
    Rectangle_getseters,           /* tp_getset */
    0,                         /* tp_base */
    0,                         /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    0,      /* tp_init */
    0,                         /* tp_alloc */
    0,                         /* tp_new */
};

// ----------------------------
// stop class : Rectangle
// ----------------------------

// ----------------------------
// start class : Configuration
// ----------------------------

//--------------------- define all the types and the converter functions -----------------------------


 // the python type
typedef struct {
    PyObject_HEAD
    configuration * _c;
} Configuration;


// dealloc
static void Configuration_dealloc(PyObject* self) {
  auto * c_ptr = ((Configuration*)self)->_c;
  if (c_ptr != NULL) delete c_ptr; // should never be null, but I protect it anyway
  Py_TYPE(self)->tp_free((PyObject*)self);
}

//--------------------- Iterator by wrapping the C++ -----------------------------

 // I used the doc and http://stackoverflow.com/questions/1815812/how-to-create-a-generator-iterator-with-the-python-c-api
 // to write this
 // the iterator type
 typedef struct {
  PyObject_HEAD
  PyObject * container;
  decltype(std::cbegin(std::declval<configuration>())) iter;
  decltype(std::cend(std::declval<configuration>())) end;
 } Configuration__iterator;

 // dealloc
 static void  Configuration__iterator_dealloc(Configuration__iterator * self) {
   Py_XDECREF(self->container);
   Py_TYPE(self)->tp_free((PyObject*)self);
 }

 // the __iter__ of the iterator type : returns itself
 PyObject* Configuration__iterator__iter__(PyObject *self) {
  Py_INCREF(self);
  return self;
 }

 // the next() method of the iterator
 PyObject* Configuration__iterator__iternext__(PyObject *self);

 static PyTypeObject Configuration__iteratorType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "som_core.Configuration__iterator",            /*tp_name*/
    sizeof(Configuration__iterator),       /*tp_basicsize*/
    0,     /*tp_itemsize*/
    (destructor)Configuration__iterator_dealloc,     /*tp_dealloc*/
    0,     /*tp_print*/
    0,     /*tp_getattr*/
    0,     /*tp_setattr*/
    0,     /*tp_compare*/
    0,     /*tp_repr*/
    0,     /*tp_as_number*/
    0,     /*tp_as_sequence*/
    0,     /*tp_as_mapping*/
    0,     /*tp_hash */
    0,     /*tp_call*/
    0,     /*tp_str*/
    0,     /*tp_getattro*/
    0,     /*tp_setattro*/
    0,     /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT, /* tp_flags */
    "Internal Configuration iterator object.",           /* tp_doc */
    0,  /* tp_traverse */
    0,  /* tp_clear */
    0,  /* tp_richcompare */
    0,  /* tp_weaklistoffset */
    Configuration__iterator__iter__,  /* tp_iter: __iter__() method */
    Configuration__iterator__iternext__  /* tp_iternext: next() method */
};

// the __iter__ of the main type: return a new iterator. Need to allocate and init it by hand (no init method).
PyObject* Configuration___iter__(PyObject *self);


//--------------------- Register as_number  -----------------------------


//--------------------- Register as_mapping  -----------------------------

static PyMappingMethods Configuration_mapping {
 (lenfunc)Configuration___len__, /* mp_length */
 (binaryfunc)Configuration___getitem__,     /* mp_subscript*/
NULL     /* mp_ass_subscript*/
};

//--------------------- Register members and properties -----------------------------

static PyGetSetDef Configuration_getseters[] = {




{"norm", (getter)Configuration__get_prop_norm, NULL, "   float: Norm of the configuration :math:`\\mathcal{N} = \\sum_k h_k w_k`.", NULL},

{NULL}  /* Sentinel */
};

//--------------------- Register the methods for the types  -----------------------------

static PyMethodDef Configuration_methods[] = {
    {"__reduce__", (PyCFunction)Configuration___reduce__, METH_VARARGS, "Internal  " },
    {"__write_hdf5__", (PyCFunction)Configuration___write_hdf5__, METH_VARARGS, "Internal : hdf5 writing via C++ " },
{NULL}  /* Sentinel */
};

//--------------------- The xxxType table  -----------------------------

static PyTypeObject ConfigurationType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "som.som_core.Configuration",/*tp_name*/
    sizeof(Configuration),             /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    (destructor)Configuration_dealloc, /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    0,                         /*tp_compare*/
    &Configuration___repr__,           /*tp_repr*/
    0,       /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    &Configuration_mapping,    /*tp_as_mapping*/
    0,                         /*tp_hash */
    Configuration___call__,                         /*tp_call*/
    &Configuration___str__,                         /*tp_str*/
    0,                         /*tp_getattro*/
    0,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    "A SOM configuration (spectral function) as a list of :class:`Rectangle`'s, and a function of energy, which is the sum of the rectangles.", /* tp_doc */
    0,		               /* tp_traverse */
    0,		               /* tp_clear */
    Configuration_richcompare,  /* tp_richcompare */
    0,		               /* tp_weaklistoffset */
    Configuration___iter__,		               /* tp_iter */
    0,		               /* tp_iternext */
    Configuration_methods,             /* tp_methods */
    0,              /* tp_members */
    Configuration_getseters,           /* tp_getset */
    0,                         /* tp_base */
    0,                         /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    0,      /* tp_init */
    0,                         /* tp_alloc */
    0,                         /* tp_new */
};

// ----------------------------
// stop class : Configuration
// ----------------------------

// ----------------------------
// start class : SomCore
// ----------------------------

//--------------------- define all the types and the converter functions -----------------------------


 // the python type
typedef struct {
    PyObject_HEAD
    som_core * _c;
} SomCore;

// the new
static PyObject* SomCore_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
  SomCore *self;
  self = (SomCore *)type->tp_alloc(type, 0);
  if (self != NULL) self->_c = NULL;
  return (PyObject *)self;
}

// dealloc
static void SomCore_dealloc(PyObject* self) {
  auto * c_ptr = ((SomCore*)self)->_c;
  if (c_ptr != NULL) delete c_ptr; // should never be null, but I protect it anyway
  Py_TYPE(self)->tp_free((PyObject*)self);
}

//--------------------- Iterator by wrapping the C++ -----------------------------


//--------------------- Register as_number  -----------------------------


//--------------------- Register as_mapping  -----------------------------


//--------------------- Register members and properties -----------------------------

static PyGetSetDef SomCore_getseters[] = {




{"solutions", (getter)SomCore__get_prop_solutions, NULL, "   :ref:`Final solutions <final_solution>`, one per diagonal element of the observable.\n   \n   :type: :class:`list` [:class:`Configuration`]\n   ", NULL},
{"objf_list", (getter)SomCore__get_prop_objf_list, NULL, "   Values of the objective function :math:`\\chi^2` of the :ref:`final solutions <final_solution>`,\n   one value per diagonal element of the observable.\n   \n   :type: :class:`list` [:class:`float`]\n   ", NULL},
{"histograms", (getter)SomCore__get_prop_histograms, NULL, "   Accumulated :math:`\\chi` histograms, one per diagonal element of the observable.\n   :data:`None` if histograms have not been accumulated.\n   \n   :type: :class:`list` [:class:`triqs.stat.histograms.Histogram`] or :data:`None`\n   ", NULL},
{"observable_kind", (getter)SomCore__get_prop_observable_kind, NULL, "   Kind of the physical observable selected upon construction, one of ``FermionGf``, ``FermionGfSymm``, ``BosonCorr``, ``BosonAutoCorr``, ``ZeroTemp``.\n   \n   :type: :class:`str`\n   ", NULL},
{"dim", (getter)SomCore__get_prop_dim, NULL, "   Number :math:`M` of diagonal matrix elements in the observable.\n   \n   :type: :class:`int`\n   ", NULL},
{"last_accumulate_parameters", (getter)SomCore__get_prop_last_accumulate_parameters, NULL, "   Set of parameters used in the last call to :func:`accumulate()`.\n   \n   :type: :class:`dict` [:class:`str`, :class:`object`]\n   ", NULL},
{"accumulate_status", (getter)SomCore__get_prop_accumulate_status, NULL, "   Status code of :func:`accumulate()` on exit.\n   \n   - 0, if the accumulation has run until the end.\n   - 1, if it has run out of time.\n   - 2, if it has been stopped by receiving a signal.\n   \n   :type: :class:`int`\n   ", NULL},
{"objf_min", (getter)SomCore__get_prop_objf_min, NULL, "   Minimum of the objective function :math:`\\chi^2` over all accumulated particular solutions\n   (one value per diagonal matrix element of the observable).\n   \n   :type: :class:`float`\n   ", NULL},

{NULL}  /* Sentinel */
};

//--------------------- Register the methods for the types  -----------------------------

static PyMethodDef SomCore_methods[] = {
    {"adjust_f", (PyCFunction)SomCore_adjust_f, METH_VARARGS| METH_KEYWORDS , "   Automatically adjust the number of global updates :math:`F`.\n   \n   This function scans a range of :math:`F` (``f_range``), accumulates ``l`` :ref:`particular solutions <particular_solutions>`\n   for each :math:`F` and evaluates the following functional for each solution,\n   \n   .. math::\n   \n       \\kappa = \\frac{1}{N-1}\\sum_{n=2}^N\n       \\frac{1}{2}\\left[1 - \\frac{\\Re[\\Delta(n)\\Delta^*(n-1)]}{|\\Delta(n)\\Delta^*(n-1)|} \\right],\n   \n   where :math:`\\Delta(n)` are discrepancies\n   \n   .. math::\n   \n       \\Delta(n) = \\int_{\\epsilon_\\mathrm{min}}^{\\epsilon_\\mathrm{max}}\n                   K(n, \\epsilon) A(\\epsilon) d\\epsilon - G(n).\n   \n   :math:`\\kappa` characterizes anti-correlation between adjacent discrepancies and can serve\n   as a measure of ergodicity in Markov chains. If :math:`\\kappa` exceeds the value of\n   parameter ``kappa`` for at least a half of accumulated solutions, :math:`F` is considered sufficient.\n   \n   .. deprecated:: 2.0\n      The automatic adjustment algorithm does not support continuation problems with full covariance matrices.\n      If the :class:`Som` object has been constructed using a covariance matrix, :func:`adjust_f()` will raise a\n      :exc:`RuntimeError`.\n   \n   :param \\**kwargs: See below.\n   :return: Selected value of :math:`F`.\n   :rtype: :class:`int`\n   \n   **Main parameters**\n   \n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | Parameter Name                       | Type          | Default           | Documentation                                                                                      |\n   +======================================+===============+===================+====================================================================================================+\n   | energy_window                        | (float,float) | --                | Estimated lower and upper bounds of the spectrum.                                                  |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | max_time                             | int           | -1 = infinite     | Maximum runtime in seconds, use -1 to set infinite.                                                |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | verbosity                            | int           | 2 on MPI rank 0,  | Verbosity level (max level - 3).                                                                   |\n   |                                      |               | 0 otherwise.      |                                                                                                    |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | t                                    | int           | 50                | Number of elementary updates per global update (:math:`T`).                                        |\n   |                                      |               |                   | Bigger values make the algorithm more ergodic.                                                     |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update                            | bool          | False             | Enable :ref:`Consistent Constraints updates <cc_update>`.                                          |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | f_range                              | (int,int)     | (100,5000)        | Search range for the number of global updates.                                                     |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   \n   **Fine tuning options**\n   \n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | Parameter Name                       | Type          | Default           | Documentation                                                                                      |\n   +======================================+===============+===================+====================================================================================================+\n   | random_seed                          | int           | 34788 +           |                                                                                                    |\n   |                                      |               | 928374 * MPI.rank | Seed for random number generator.                                                                  |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | random_name                          | str           | \"\"                | Name of random number generator (MT19937 by default).                                              |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | max_rects                            | int           | 60                | Maximum number of rectangles in a particular solution (:math:`K_{max}`).                           |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | min_rect_width                       | float         | 1e-3              | Minimal width of a rectangle, in units of the energy window width.                                 |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | min_rect_weight                      | float         | 1e-3              | Minimal weight of a rectangle, in units of the requested solution norm.                            |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | t1                                   | int           | -1                | Number of elementary updates in the first stage of a global update.                                |\n   |                                      |               |                   | When set to -1, the number of elementary updates will be chosen randomly for each global update    |\n   |                                      |               |                   | from the :math:`[1; T[` range.                                                                     |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | distrib_d_max                        | float         | 2.0               | Maximal parameter of the power-law distribution function for the Metropolis algorithm.             |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | gamma                                | float         | 2.0               | Proposal probability parameter :math:`\\gamma`.                                                     |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_cycle_length               | int           | 10                | :ref:`CC update <cc_update>`: Number of proposed elementary updates between two successive CC      |\n   |                                      |               |                   | updates (only during the first stage of a global update).                                          |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_max_iter                   | int           | 30                | :ref:`CC update <cc_update>`: Maximum allowed number of height adjustment iterations.              |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_rect_norm_variation_tol    | float         | 1e-3              | :ref:`CC update <cc_update>`: The height adjustment procedure stops when variation of every        |\n   |                                      |               |                   | rectangle\'s norm between two consecutive iterations is below this value. This parameter is         |\n   |                                      |               |                   | measured in units of the requested solution norm.                                                  |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_height_penalty_max         | float         | 1e3               | :ref:`CC update <cc_update>`: Maximum value of the regularization parameters :math:`Q_0(k)` that   |\n   |                                      |               |                   | penalize negative heights. Measured in units of (energy window width) / (solution norm).           |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_height_penalty_divisor     | float         | 10.0              | :ref:`CC update <cc_update>`: Divisor used to reduce the regularization parameters :math:`Q_0(k)`  |\n   |                                      |               |                   | that penalize negative heights.                                                                    |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_der_penalty_init           | float         | 1.0               | :ref:`CC update <cc_update>`: Initial value of the regularization parameters :math:`Q_1(k)`        |\n   |                                      |               |                   | and :math:`Q_2(k)` that penalize large derivatives of a solution.                                  |\n   |                                      |               |                   | Measured in units of (energy window width)^2 / (solution norm) for :math:`Q_1(k)` and              |\n   |                                      |               |                   | in units of (energy window width)^3 / (solution norm) for :math:`Q_2(k)`.                          |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_der_penalty_threshold      | float         | 0.1               | :ref:`CC update <cc_update>`: Sets the threshold value of the products :math:`|Q_1(k) A\'(k)|` and  |\n   |                                      |               |                   | :math:`|Q_2(k) A\'\'(k)|`, above which derivative regularization parameters :math:`Q_1(k)` and       |\n   |                                      |               |                   | :math:`Q_2(k)` need to be reduced.                                                                 |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_der_penalty_increase_coeff | float         | 2.0               | :ref:`CC update <cc_update>`: Coefficient used to increase the regularization parameters           |\n   |                                      |               |                   | :math:`Q_1(k)` and :math:`Q_2(k)` that penalize large derivatives of a solution.                   |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_der_penalty_limiter        | float         | 1e3               | :ref:`CC update <cc_update>`: Coefficient that limits growth of the regularization parameters      |\n   |                                      |               |                   | :math:`Q_1(k)` and :math:`Q_2(k)` penalizing large derivatives of a solution.                      |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | l                                    | int           | 20                | Number of particular solutions used to adjust :math:`F`.                                           |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | kappa                                | float         | 0.25              | Limiting value of :math:`\\kappa` used to adjust :math:`F`.                                         |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   " },
    {"accumulate", (PyCFunction)SomCore_accumulate, METH_VARARGS| METH_KEYWORDS , "   Accumulate :ref:`particular solutions <particular_solutions>`.\n   This method can be called multiple times to accumulate the particular solutions incrementally.\n   \n   :param \\**kwargs: See below.\n   \n   \n   **Main parameters**\n   \n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | Parameter Name                       | Type          | Default           | Documentation                                                                                      |\n   +======================================+===============+===================+====================================================================================================+\n   | energy_window                        | (float,float) | --                | Estimated lower and upper bounds of the spectrum.                                                  |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | max_time                             | int           | -1 = infinite     | Maximum runtime in seconds, use -1 to set infinite.                                                |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | verbosity                            | int           | 2 on MPI rank 0,  | Verbosity level (max level - 3).                                                                   |\n   |                                      |               | 0 otherwise.      |                                                                                                    |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | t                                    | int           | 50                | Number of elementary updates per global update (:math:`T`).                                        |\n   |                                      |               |                   | Bigger values make the algorithm more ergodic.                                                     |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update                            | bool          | False             | Enable :ref:`Consistent Constraints updates <cc_update>`.                                          |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | f                                    | int           | 100               | Number of global updates (:math:`F`). Bigger values make the algorithm more ergodic.               |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | l                                    | int           | 2000              | Number of particular solutions to accumulate (:math:`L`); ignored if ``adjust_l=True``.            |\n   |                                      |               |                   | Bigger values reduce noise in the final solution / make it smoother.                               |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | adjust_l                             | bool          | False             | Automatically adjust the number of particular solutions to accumulate (:math:`L`).                 |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | make_histograms                      | bool          | False             | Accumulate histograms of :math:`\\chi`, where :math:`\\chi^2` is the objective function.             |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   \n   **Fine tuning options**\n   \n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | Parameter Name                       | Type          | Default           | Documentation                                                                                      |\n   +======================================+===============+===================+====================================================================================================+\n   | random_seed                          | int           | 34788 +           |                                                                                                    |\n   |                                      |               | 928374 * MPI.rank | Seed for random number generator.                                                                  |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | random_name                          | str           | \"\"                | Name of random number generator (MT19937 by default).                                              |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | max_rects                            | int           | 60                | Maximum number of rectangles in a particular solution (:math:`K_{max}`).                           |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | min_rect_width                       | float         | 1e-3              | Minimal width of a rectangle, in units of the energy window width.                                 |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | min_rect_weight                      | float         | 1e-3              | Minimal weight of a rectangle, in units of the requested solution norm.                            |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | t1                                   | int           | -1                | Number of elementary updates in the first stage of a global update.                                |\n   |                                      |               |                   | When set to -1, the number of elementary updates will be chosen randomly for each global update    |\n   |                                      |               |                   | from the :math:`[1; T[` range.                                                                     |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | distrib_d_max                        | float         | 2.0               | Maximal parameter of the power-law distribution function for the Metropolis algorithm.             |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | gamma                                | float         | 2.0               | Proposal probability parameter :math:`\\gamma`.                                                     |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_cycle_length               | int           | 10                | :ref:`CC update <cc_update>`: Number of proposed elementary updates between two successive CC      |\n   |                                      |               |                   | updates (only during the first stage of a global update).                                          |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_max_iter                   | int           | 30                | :ref:`CC update <cc_update>`: Maximum allowed number of height adjustment iterations.              |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_rect_norm_variation_tol    | float         | 1e-3              | :ref:`CC update <cc_update>`: The height adjustment procedure stops when variation of every        |\n   |                                      |               |                   | rectangle\'s norm between two consecutive iterations is below this value. This parameter is         |\n   |                                      |               |                   | measured in units of the requested solution norm.                                                  |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_height_penalty_max         | float         | 1e3               | :ref:`CC update <cc_update>`: Maximum value of the regularization parameters :math:`Q_0(k)` that   |\n   |                                      |               |                   | penalize negative heights. Measured in units of (energy window width) / (solution norm).           |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_height_penalty_divisor     | float         | 10.0              | :ref:`CC update <cc_update>`: Divisor used to reduce the regularization parameters :math:`Q_0(k)`  |\n   |                                      |               |                   | that penalize negative heights.                                                                    |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_der_penalty_init           | float         | 1.0               | :ref:`CC update <cc_update>`: Initial value of the regularization parameters :math:`Q_1(k)`        |\n   |                                      |               |                   | and :math:`Q_2(k)` that penalize large derivatives of a solution.                                  |\n   |                                      |               |                   | Measured in units of (energy window width)^2 / (solution norm) for :math:`Q_1(k)` and              |\n   |                                      |               |                   | in units of (energy window width)^3 / (solution norm) for :math:`Q_2(k)`.                          |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_der_penalty_threshold      | float         | 0.1               | :ref:`CC update <cc_update>`: Sets the threshold value of the products :math:`|Q_1(k) A\'(k)|` and  |\n   |                                      |               |                   | :math:`|Q_2(k) A\'\'(k)|`, above which derivative regularization parameters :math:`Q_1(k)` and       |\n   |                                      |               |                   | :math:`Q_2(k)` need to be reduced.                                                                 |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_der_penalty_increase_coeff | float         | 2.0               | :ref:`CC update <cc_update>`: Coefficient used to increase the regularization parameters           |\n   |                                      |               |                   | :math:`Q_1(k)` and :math:`Q_2(k)` that penalize large derivatives of a solution.                   |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_der_penalty_limiter        | float         | 1e3               | :ref:`CC update <cc_update>`: Coefficient that limits growth of the regularization parameters      |\n   |                                      |               |                   | :math:`Q_1(k)` and :math:`Q_2(k)` penalizing large derivatives of a solution.                      |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | adjust_l_range                       | (int,int)     | (100,2000)        | Automatic :math:`L` adjustment: Search range for the number of particular solutions to accumulate. |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | adjust_l_good_chi                    | float         | 2.0               | Automatic :math:`L` adjustment: Maximal ratio :math:`\\chi/\\chi_\\mathrm{min}` for a particular      |\n   |                                      |               |                   | solution to be considered good.                                                                    |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | adjust_l_verygood_chi                | float         | 4/3               | Automatic :math:`L` adjustment: Maximal ratio :math:`\\chi/\\chi_\\mathrm{min}` for a particular      |\n   |                                      |               |                   | solution to be considered very good.                                                               |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | adjust_l_ratio                       | float         | 0.95              | Automatic :math:`L` adjustment: Critical ratio :math:`N_\\mathrm{very good}/N_\\mathrm{good}` to     |\n   |                                      |               |                   | stop the :math:`L`-adjustment procedure.                                                           |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | hist_max                             | float         | 2.0               | Right boundary of the histograms, in units of :math:`\\chi_\\mathrm{min}`                            |\n   |                                      |               |                   | (left boundary is always set to :math:`\\chi_\\mathrm{min}`).                                        |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | hist_n_bins                          | int           | 100               | Number of bins for the histograms.                                                                 |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   \n   " },
    {"run", (PyCFunction)SomCore_run, METH_VARARGS| METH_KEYWORDS , "   Accumulate particular solutions and compute the final solution using the standard SOM criterion.\n   \n   Calling this method is equivalent to calling :func:`accumulate` and :func:`compute_final_solution` with ``good_chi_rel=adjust_l_good_chi``.\n   \n   .. deprecated:: 2.0\n      Use :func:`accumulate()` and :func:`compute_final_solution()` instead.\n   \n   :param \\**kwargs: See below.\n   \n   \n   **Main parameters**\n   \n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | Parameter Name                       | Type          | Default           | Documentation                                                                                      |\n   +======================================+===============+===================+====================================================================================================+\n   | energy_window                        | (float,float) | --                | Estimated lower and upper bounds of the spectrum.                                                  |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | max_time                             | int           | -1 = infinite     | Maximum runtime in seconds, use -1 to set infinite.                                                |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | verbosity                            | int           | 2 on MPI rank 0,  | Verbosity level (max level - 3).                                                                   |\n   |                                      |               | 0 otherwise.      |                                                                                                    |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | t                                    | int           | 50                | Number of elementary updates per global update (:math:`T`).                                        |\n   |                                      |               |                   | Bigger values make the algorithm more ergodic.                                                     |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update                            | bool          | False             | Enable :ref:`Consistent Constraints updates <cc_update>`.                                          |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | f                                    | int           | 100               | Number of global updates (:math:`F`). Bigger values make the algorithm more ergodic.               |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | l                                    | int           | 2000              | Number of particular solutions to accumulate (:math:`L`); ignored if ``adjust_l=True``.            |\n   |                                      |               |                   | Bigger values reduce noise in the final solution / make it smoother.                               |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | adjust_l                             | bool          | False             | Automatically adjust the number of particular solutions to accumulate (:math:`L`).                 |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | make_histograms                      | bool          | False             | Accumulate histograms of :math:`\\chi`, where :math:`\\chi^2` is the objective function.             |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   \n   **Fine tuning options**\n   \n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | Parameter Name                       | Type          | Default           | Documentation                                                                                      |\n   +======================================+===============+===================+====================================================================================================+\n   | random_seed                          | int           | 34788 +           |                                                                                                    |\n   |                                      |               | 928374 * MPI.rank | Seed for random number generator.                                                                  |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | random_name                          | str           | \"\"                | Name of random number generator (MT19937 by default).                                              |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | max_rects                            | int           | 60                | Maximum number of rectangles in a particular solution (:math:`K_{max}`).                           |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | min_rect_width                       | float         | 1e-3              | Minimal width of a rectangle, in units of the energy window width.                                 |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | min_rect_weight                      | float         | 1e-3              | Minimal weight of a rectangle, in units of the requested solution norm.                            |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | t1                                   | int           | -1                | Number of elementary updates in the first stage of a global update.                                |\n   |                                      |               |                   | When set to -1, the number of elementary updates will be chosen randomly for each global update    |\n   |                                      |               |                   | from the :math:`[1; T[` range.                                                                     |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | distrib_d_max                        | float         | 2.0               | Maximal parameter of the power-law distribution function for the Metropolis algorithm.             |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | gamma                                | float         | 2.0               | Proposal probability parameter :math:`\\gamma`.                                                     |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_cycle_length               | int           | 10                | :ref:`CC update <cc_update>`: Number of proposed elementary updates between two successive CC      |\n   |                                      |               |                   | updates (only during the first stage of a global update).                                          |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_max_iter                   | int           | 30                | :ref:`CC update <cc_update>`: Maximum allowed number of height adjustment iterations.              |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_rect_norm_variation_tol    | float         | 1e-3              | :ref:`CC update <cc_update>`: The height adjustment procedure stops when variation of every        |\n   |                                      |               |                   | rectangle\'s norm between two consecutive iterations is below this value. This parameter is         |\n   |                                      |               |                   | measured in units of the requested solution norm.                                                  |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_height_penalty_max         | float         | 1e3               | :ref:`CC update <cc_update>`: Maximum value of the regularization parameters :math:`Q_0(k)` that   |\n   |                                      |               |                   | penalize negative heights. Measured in units of (energy window width) / (solution norm).           |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_height_penalty_divisor     | float         | 10.0              | :ref:`CC update <cc_update>`: Divisor used to reduce the regularization parameters :math:`Q_0(k)`  |\n   |                                      |               |                   | that penalize negative heights.                                                                    |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_der_penalty_init           | float         | 1.0               | :ref:`CC update <cc_update>`: Initial value of the regularization parameters :math:`Q_1(k)`        |\n   |                                      |               |                   | and :math:`Q_2(k)` that penalize large derivatives of a solution.                                  |\n   |                                      |               |                   | Measured in units of (energy window width)^2 / (solution norm) for :math:`Q_1(k)` and              |\n   |                                      |               |                   | in units of (energy window width)^3 / (solution norm) for :math:`Q_2(k)`.                          |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_der_penalty_threshold      | float         | 0.1               | :ref:`CC update <cc_update>`: Sets the threshold value of the products :math:`|Q_1(k) A\'(k)|` and  |\n   |                                      |               |                   | :math:`|Q_2(k) A\'\'(k)|`, above which derivative regularization parameters :math:`Q_1(k)` and       |\n   |                                      |               |                   | :math:`Q_2(k)` need to be reduced.                                                                 |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_der_penalty_increase_coeff | float         | 2.0               | :ref:`CC update <cc_update>`: Coefficient used to increase the regularization parameters           |\n   |                                      |               |                   | :math:`Q_1(k)` and :math:`Q_2(k)` that penalize large derivatives of a solution.                   |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | cc_update_der_penalty_limiter        | float         | 1e3               | :ref:`CC update <cc_update>`: Coefficient that limits growth of the regularization parameters      |\n   |                                      |               |                   | :math:`Q_1(k)` and :math:`Q_2(k)` penalizing large derivatives of a solution.                      |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | adjust_l_range                       | (int,int)     | (100,2000)        | Automatic :math:`L` adjustment: Search range for the number of particular solutions to accumulate. |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | adjust_l_good_chi                    | float         | 2.0               | Automatic :math:`L` adjustment: Maximal ratio :math:`\\chi/\\chi_\\mathrm{min}` for a particular      |\n   |                                      |               |                   | solution to be considered good.                                                                    |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | adjust_l_verygood_chi                | float         | 4/3               | Automatic :math:`L` adjustment: Maximal ratio :math:`\\chi/\\chi_\\mathrm{min}` for a particular      |\n   |                                      |               |                   | solution to be considered very good.                                                               |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | adjust_l_ratio                       | float         | 0.95              | Automatic :math:`L` adjustment: Critical ratio :math:`N_\\mathrm{very good}/N_\\mathrm{good}` to     |\n   |                                      |               |                   | stop the :math:`L`-adjustment procedure.                                                           |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | hist_max                             | float         | 2.0               | Right boundary of the histograms, in units of :math:`\\chi_\\mathrm{min}`                            |\n   |                                      |               |                   | (left boundary is always set to :math:`\\chi_\\mathrm{min}`).                                        |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | hist_n_bins                          | int           | 100               | Number of bins for the histograms.                                                                 |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   \n   " },
    {"compute_final_solution", (PyCFunction)SomCore_compute_final_solution, METH_VARARGS| METH_KEYWORDS , "Signature : (float good_chi_rel =  2.0, float good_chi_abs =  HUGE_VAL, int verbosity =  0) -> list[float]\n   \n   Select particular solutions according to the standard SOM criterion and compute the final solution.\n   \n   Selected solutions must satisfy :math:`\\chi[A_j] \\leq \\chi_c^\\mathrm{abs}` and :math:`\\chi[A_j] \\leq \\min_{j'}(\\chi[A_{j'}]) \\chi_c^\\mathrm{rel}`.\n   \n   :param good_chi_rel: Solution selection parameter :math:`\\chi_c^\\mathrm{rel}`.\n   :type good_chi_rel: :class:`float`\n   :param good_chi_abs: Solution selection parameter :math:`\\chi_c^\\mathrm{abs}`.\n   :type good_chi_abs: :class:`float`\n   :param verbosity: When positive, print extra information.\n   :type verbosity: :class:`int`\n   :return: A length-:math:`M` list of values of :math:`\\chi^2`, one element per continuation problem.\n   :rtype: :class:`list` [:class:`float`]\n   " },
    {"compute_final_solution_cc", (PyCFunction)SomCore_compute_final_solution_cc, METH_VARARGS| METH_KEYWORDS , "   Select particular solutions and compute the final solution using the :ref:`SOCC protocol <final_solution_cc>`.\n   \n   Selected solutions must satisfy :math:`\\chi[A_j] \\leq \\chi_c^\\mathrm{abs}` and :math:`\\chi[A_j] \\leq \\min_{j'}(\\chi[A_{j'}]) \\chi_c^\\mathrm{rel}`.\n   \n   :param \\**kwargs: See below.\n   \n   :return: A length-:math:`M` list of values of :math:`\\chi^2`, one element per continuation problem.\n   :rtype: :class:`list` [:class:`float`]\n   \n   **Main parameters**\n   \n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | Parameter Name                       | Type          | Default           | Documentation                                                                                      |\n   +======================================+===============+===================+====================================================================================================+\n   | refreq_mesh                          | MeshReFreq or | --                | Grid of energy points :math:`\\epsilon_k` used in CC regularization procedure.                      |\n   |                                      | real 1D       |                   | Either a TRIQS real-frequency mesh object or a strictly ordered list of points.                    |\n   |                                      | array_like    |                   |                                                                                                    |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | verbosity                            | int           | 1 on MPI rank 0,  | Verbosity level (max level - 2).                                                                   |\n   |                                      |               | 0 otherwise.      |                                                                                                    |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | good_chi_rel                         | float         | 2.0               | Maximal ratio :math:`\\chi/\\chi_\\mathrm{min}` for a particular solution to be selected.             |\n   |                                      |               |                   | This criterion must be fulfilled together with the one set by ``good_chi_abs``.                    |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | good_chi_abs                         | float         | infinity          | Maximal value of :math:`\\chi` for a particular solution to be selected.                            |\n   |                                      |               |                   | This criterion must be fulfilled together with the one set by ``good_chi_rel``.                    |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | default_model                        | Real 1D array | []                | Optional default model of the spectral function evaluated at energy points of ``refreq_mesh``      |\n   |                                      |               |                   | (:math:`A_T(\\epsilon_k)`).                                                                         |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | default_model_weights                | Real 1D array | []                | Weights determining how much deviations from ``default_model`` are penalized at each energy point  |\n   |                                      |               |                   | (:math:`T_k`).                                                                                     |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | max_iter                             | int           | 50                | Maximum allowed number of parameter adjustment iterations.                                         |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | max_sum_abs_c                        | float         | 2.0               | Stop parameter adjustment iterations when expansion coefficients :math:`c_j` make the sum          |\n   |                                      |               |                   | :math:`\\sum_j |c_j|` exceed this value.                                                            |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   \n   **Fine tuning options**\n   \n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | Parameter Name                       | Type          | Default           | Documentation                                                                                      |\n   +======================================+===============+===================+====================================================================================================+\n   | ew_penalty_coeff                     | float         | 1.0               | Coefficient of the term that penalizes large deviations from the equal-weight superposition.       |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | amp_penalty_max                      | float         | 1e3               | Maximum value of the regularization parameters that penalize negative values of                    |\n   |                                      |               |                   | the spectral function (:math:`\\mathcal{Q}_k`).                                                     |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | amp_penalty_divisor                  | float         | 10.0              | Divisor used to reduce the regularization parameters that penalize negative values of              |\n   |                                      |               |                   | the spectral function (:math:`\\mathcal{Q}_k`).                                                     |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | der_penalty_init                     | float         | 0.1               | Initial value of the regularization parameters that penalize large derivatives of the solution     |\n   |                                      |               |                   | (:math:`\\mathcal{D}`). Before this parameter is used, it is divided by the number of selected      |\n   |                                      |               |                   | particular solutions.                                                                              |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | der_penalty_coeff                    | float         | 2.0               | Coefficient used to increase the regularization parameters that penalize large derivatives of      |\n   |                                      |               |                   | the solution (:math:`f`).                                                                          |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   | monitor                              | function      | None              | Monitor function called at each parameter adjustment iteration. It takes 4 arguments,              |\n   |                                      |               |                   |                                                                                                    |\n   |                                      |               |                   | - Current list of expansion coefficients :math:`c_j`;                                              |\n   |                                      |               |                   | - Amplitudes of the spectrum and respective regularization parameters as a                         |\n   |                                      |               |                   |   :math:`(A_k, Q_k)` pair;                                                                         |\n   |                                      |               |                   | - Derivatives of the spectrum and respective regularization parameters as a                        |\n   |                                      |               |                   |   :math:`(A'_k, D_k)` pair;                                                                        |\n   |                                      |               |                   | - Second derivatives of the spectrum and respective regularization parameters as a                 |\n   |                                      |               |                   |   :math:`(A''_k, B_k)` pair.                                                                       |\n   |                                      |               |                   |                                                                                                    |\n   |                                      |               |                   | Returning ``True`` from the function stops the adjustment procedure.                               |\n   +--------------------------------------+---------------+-------------------+----------------------------------------------------------------------------------------------------+\n   " },
    {"clear", (PyCFunction)SomCore_clear, METH_VARARGS| METH_KEYWORDS , "Signature : () -> None\n   \n   Discard all accumulated particular solutions, histograms and final solutions." },
    {"particular_solutions", (PyCFunction)SomCore_particular_solutions, METH_VARARGS| METH_KEYWORDS , "Signature : (int i) -> list[std::pair<configuration, double>]\n   \n   :ref:`Particular solutions <particular_solutions>` and their respective values of the\n   objective function :math:`\\chi^2` for the i-th diagonal element of the observable accumulated on this MPI rank.\n   \n   :param i: Index of the diagonal matrix element of the observable.\n   :type i: :class:`int`\n   :rtype: :class:`list` [:class:`tuple` [:class:`Configuration`, :class:`float`)]]\n   " },
    {"solution", (PyCFunction)SomCore_solution, METH_VARARGS| METH_KEYWORDS , "Signature : (int i) -> Configuration\n   \n   :ref:`Final solution <final_solution>` for the i-th diagonal element of the observable.\n   \n   :param i: Index of the diagonal matrix element of the observable.\n   :type i: :class:`int`\n   :rtype: :class:`Configuration`\n   " },
    {"objf", (PyCFunction)SomCore_objf, METH_VARARGS| METH_KEYWORDS , "Signature : (int i) -> float\n   \n   Value of the objective function :math:`\\chi^2` of the :ref:`final solution <final_solution>`\n   for the i-th diagonal element of the observable.\n   \n   :param i: Index of the diagonal matrix element of the observable.\n   :type i: :class:`int`\n   :rtype: :class:`float`\n   " },
    {"histogram", (PyCFunction)SomCore_histogram, METH_VARARGS| METH_KEYWORDS , "Signature : (int i) -> std::optional<histogram>\n   \n   Accumulated :math:`\\chi` histogram for the i-th diagonal element of the observable.\n   Returns :data:`None` if histograms have not been accumulated.\n   \n   :param i: Index of the diagonal matrix element of the observable.\n   :type i: :class:`int`\n   :rtype: :class:`triqs.stat.histograms.Histogram` or :data:`None`\n   " },
    {"__reduce__", (PyCFunction)SomCore___reduce__, METH_VARARGS, "Internal  " },
    {"__write_hdf5__", (PyCFunction)SomCore___write_hdf5__, METH_VARARGS, "Internal : hdf5 writing via C++ " },
{NULL}  /* Sentinel */
};

//--------------------- The xxxType table  -----------------------------

static PyTypeObject SomCoreType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "som.som_core.SomCore",/*tp_name*/
    sizeof(SomCore),             /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    (destructor)SomCore_dealloc, /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    0,                         /*tp_compare*/
    0,           /*tp_repr*/
    0,       /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,    /*tp_as_mapping*/
    0,                         /*tp_hash */
    0,                         /*tp_call*/
    0,                         /*tp_str*/
    0,                         /*tp_getattro*/
    0,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    "Main class of SOM.", /* tp_doc */
    0,		               /* tp_traverse */
    0,		               /* tp_clear */
    SomCore_richcompare,  /* tp_richcompare */
    0,		               /* tp_weaklistoffset */
    0,		               /* tp_iter */
    0,		               /* tp_iternext */
    SomCore_methods,             /* tp_methods */
    0,              /* tp_members */
    SomCore_getseters,           /* tp_getset */
    0,                         /* tp_base */
    0,                         /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    (initproc)SomCore___init__,      /* tp_init */
    0,                         /* tp_alloc */
    (newfunc)SomCore_new, /* tp_new */
};

// ----------------------------
// stop class : SomCore
// ----------------------------


//--------------------- Converters of enums --------------------------


namespace cpp2py {

template <> struct py_converter<observable_kind> {
 static PyObject * c2py(observable_kind x) {
    if (x == FermionGf) return PyUnicode_FromString("FermionGf");
    if (x == FermionGfSymm) return PyUnicode_FromString("FermionGfSymm");
    if (x == BosonCorr) return PyUnicode_FromString("BosonCorr");
    if (x == BosonAutoCorr) return PyUnicode_FromString("BosonAutoCorr");
   return PyUnicode_FromString("ZeroTemp"); // last case separate to avoid no return warning of compiler
 }
 static observable_kind py2c(PyObject * ob){
   std::string s = PyUnicode_AsUTF8(ob);
    if (s == "FermionGf") return FermionGf;
    if (s == "FermionGfSymm") return FermionGfSymm;
    if (s == "BosonCorr") return BosonCorr;
    if (s == "BosonAutoCorr") return BosonAutoCorr;
   return ZeroTemp;
 }
 static bool is_convertible(PyObject *ob, bool raise_exception) {
   if (!PyUnicode_Check(ob)) {
     if (raise_exception) PyErr_SetString(PyExc_ValueError, "Convertion of C++ enum observable_kind : the object is not a string");
     return false;
   }
   std::string s = PyUnicode_AsUTF8(ob);
    if (s == "FermionGf") return true;
    if (s == "FermionGfSymm") return true;
    if (s == "BosonCorr") return true;
    if (s == "BosonAutoCorr") return true;
    if (s == "ZeroTemp") return true;
   if (raise_exception) {
    auto err = "Convertion of C++ enum observable_kind : \nThe string \"" + s +"\" is not in [FermionGf,FermionGfSymm,BosonCorr,BosonAutoCorr,ZeroTemp]";
    PyErr_SetString(PyExc_ValueError, err.c_str());
   }
   return false;
 }
};

}

//--------------------- define all functions/methods with args, kwds, including constructors -----------------------------


 static PyObject* som_core_fill_refreq(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 2;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload fill_refreq(triqs::gfs::gf_view<refreq> g_w, som_core cont, bool with_binning) -> void
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_view<refreq>>, triqs::gfs::gf_view<refreq> *, triqs::gfs::gf_view<refreq>>;
     _type_0 __g_w = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<som_core>, som_core *, som_core>;
     _type_1 __cont = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<bool>, bool *, bool>;
     _type_2 __with_binning =  true; // not default for wrapped type please
     static const char *kwlist[] = {"g_w","cont","with_binning",NULL};
     static const char * format = "O&O&|O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_view<refreq>> ,&__g_w,converter_for_parser<som_core> ,&__cont,converter_for_parser<bool> ,&__with_binning))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g_w = deref_is_wrapped(__g_w);
       static_assert(std::is_reference<decltype(g_w)>::value || std::is_pointer<decltype(g_w)>::value, "internal error");
       decltype(auto) cont = deref_is_wrapped(__cont);
       static_assert(std::is_reference<decltype(cont)>::value || std::is_pointer<decltype(cont)>::value, "internal error");
       decltype(auto) with_binning = deref_is_wrapped(__with_binning);
       static_assert(std::is_reference<decltype(with_binning)>::value || std::is_pointer<decltype(with_binning)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
         fill_refreq(g_w,cont,with_binning); // the call is here. It sets up "result" : sets up in the python layer.
         Py_INCREF(Py_None);
         py_result = Py_None;
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. fill_refreq(triqs::gfs::gf_view<refreq> g_w, som_core cont, bool with_binning) -> void \n.. in implementation of function som_core.fill_refreq", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload fill_refreq(triqs::gfs::gf_view<refreq> g_w, som_core cont, bool with_binning) -> void
    {// overload fill_refreq(triqs::gfs::gf_view<refreq> g_w, observable_kind kind, std::vector<configuration> solutions, bool with_binning) -> void
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_view<refreq>>, triqs::gfs::gf_view<refreq> *, triqs::gfs::gf_view<refreq>>;
     _type_0 __g_w = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<observable_kind>, observable_kind *, observable_kind>;
     _type_1 __kind = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<std::vector<configuration>>, std::vector<configuration> *, std::vector<configuration>>;
     _type_2 __solutions = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<bool>, bool *, bool>;
     _type_3 __with_binning =  true; // not default for wrapped type please
     static const char *kwlist[] = {"g_w","kind","solutions","with_binning",NULL};
     static const char * format = "O&O&O&|O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_view<refreq>> ,&__g_w,converter_for_parser<observable_kind> ,&__kind,converter_for_parser<std::vector<configuration>> ,&__solutions,converter_for_parser<bool> ,&__with_binning))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g_w = deref_is_wrapped(__g_w);
       static_assert(std::is_reference<decltype(g_w)>::value || std::is_pointer<decltype(g_w)>::value, "internal error");
       decltype(auto) kind = deref_is_wrapped(__kind);
       static_assert(std::is_reference<decltype(kind)>::value || std::is_pointer<decltype(kind)>::value, "internal error");
       decltype(auto) solutions = deref_is_wrapped(__solutions);
       static_assert(std::is_reference<decltype(solutions)>::value || std::is_pointer<decltype(solutions)>::value, "internal error");
       decltype(auto) with_binning = deref_is_wrapped(__with_binning);
       static_assert(std::is_reference<decltype(with_binning)>::value || std::is_pointer<decltype(with_binning)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
         fill_refreq(g_w,kind,solutions,with_binning); // the call is here. It sets up "result" : sets up in the python layer.
         Py_INCREF(Py_None);
         py_result = Py_None;
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. fill_refreq(triqs::gfs::gf_view<refreq> g_w, observable_kind kind, std::vector<configuration> solutions, bool with_binning) -> void \n.. in implementation of function som_core.fill_refreq", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[1] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[1] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload fill_refreq(triqs::gfs::gf_view<refreq> g_w, observable_kind kind, std::vector<configuration> solutions, bool with_binning) -> void

   static const char * overloads_signatures[] = {"fill_refreq(triqs::gfs::gf_view<refreq> g_w, som_core cont, bool with_binning) -> void", "fill_refreq(triqs::gfs::gf_view<refreq> g_w, observable_kind kind, std::vector<configuration> solutions, bool with_binning) -> void"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of function som_core.fill_refreq\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* som_core_compute_tail(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 2;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload compute_tail(int max_order, som_core cont) -> nda::array<dcomplex, 3>
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<int>, int *, int>;
     _type_0 __max_order = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<som_core>, som_core *, som_core>;
     _type_1 __cont = _type_1{}; // not default for wrapped type please
     static const char *kwlist[] = {"max_order","cont",NULL};
     static const char * format = "iO&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	 ,&__max_order,converter_for_parser<som_core> ,&__cont))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) max_order = deref_is_wrapped(__max_order);
       static_assert(std::is_reference<decltype(max_order)>::value || std::is_pointer<decltype(max_order)>::value, "internal error");
       decltype(auto) cont = deref_is_wrapped(__cont);
       static_assert(std::is_reference<decltype(cont)>::value || std::is_pointer<decltype(cont)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        nda::array<dcomplex, 3> result =  compute_tail(max_order,cont); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. compute_tail(int max_order, som_core cont) -> nda::array<dcomplex, 3> \n.. in implementation of function som_core.compute_tail", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload compute_tail(int max_order, som_core cont) -> nda::array<dcomplex, 3>
    {// overload compute_tail(int max_order, observable_kind kind, std::vector<configuration> solutions) -> nda::array<dcomplex, 3>
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<int>, int *, int>;
     _type_0 __max_order = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<observable_kind>, observable_kind *, observable_kind>;
     _type_1 __kind = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<std::vector<configuration>>, std::vector<configuration> *, std::vector<configuration>>;
     _type_2 __solutions = _type_2{}; // not default for wrapped type please
     static const char *kwlist[] = {"max_order","kind","solutions",NULL};
     static const char * format = "iO&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	 ,&__max_order,converter_for_parser<observable_kind> ,&__kind,converter_for_parser<std::vector<configuration>> ,&__solutions))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) max_order = deref_is_wrapped(__max_order);
       static_assert(std::is_reference<decltype(max_order)>::value || std::is_pointer<decltype(max_order)>::value, "internal error");
       decltype(auto) kind = deref_is_wrapped(__kind);
       static_assert(std::is_reference<decltype(kind)>::value || std::is_pointer<decltype(kind)>::value, "internal error");
       decltype(auto) solutions = deref_is_wrapped(__solutions);
       static_assert(std::is_reference<decltype(solutions)>::value || std::is_pointer<decltype(solutions)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        nda::array<dcomplex, 3> result =  compute_tail(max_order,kind,solutions); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. compute_tail(int max_order, observable_kind kind, std::vector<configuration> solutions) -> nda::array<dcomplex, 3> \n.. in implementation of function som_core.compute_tail", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[1] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[1] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload compute_tail(int max_order, observable_kind kind, std::vector<configuration> solutions) -> nda::array<dcomplex, 3>

   static const char * overloads_signatures[] = {"compute_tail(int max_order, som_core cont) -> nda::array<dcomplex, 3>", "compute_tail(int max_order, observable_kind kind, std::vector<configuration> solutions) -> nda::array<dcomplex, 3>"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of function som_core.compute_tail\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* som_core_reconstruct(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 6;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload reconstruct(triqs::gfs::gf_view<imtime> g, som_core cont) -> void
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_view<imtime>>, triqs::gfs::gf_view<imtime> *, triqs::gfs::gf_view<imtime>>;
     _type_0 __g = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<som_core>, som_core *, som_core>;
     _type_1 __cont = _type_1{}; // not default for wrapped type please
     static const char *kwlist[] = {"g","cont",NULL};
     static const char * format = "O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_view<imtime>> ,&__g,converter_for_parser<som_core> ,&__cont))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g = deref_is_wrapped(__g);
       static_assert(std::is_reference<decltype(g)>::value || std::is_pointer<decltype(g)>::value, "internal error");
       decltype(auto) cont = deref_is_wrapped(__cont);
       static_assert(std::is_reference<decltype(cont)>::value || std::is_pointer<decltype(cont)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
         reconstruct(g,cont); // the call is here. It sets up "result" : sets up in the python layer.
         Py_INCREF(Py_None);
         py_result = Py_None;
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. reconstruct(triqs::gfs::gf_view<imtime> g, som_core cont) -> void \n.. in implementation of function som_core.reconstruct", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload reconstruct(triqs::gfs::gf_view<imtime> g, som_core cont) -> void
    {// overload reconstruct(triqs::gfs::gf_view<imfreq> g, som_core cont) -> void
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_view<imfreq>>, triqs::gfs::gf_view<imfreq> *, triqs::gfs::gf_view<imfreq>>;
     _type_0 __g = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<som_core>, som_core *, som_core>;
     _type_1 __cont = _type_1{}; // not default for wrapped type please
     static const char *kwlist[] = {"g","cont",NULL};
     static const char * format = "O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_view<imfreq>> ,&__g,converter_for_parser<som_core> ,&__cont))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g = deref_is_wrapped(__g);
       static_assert(std::is_reference<decltype(g)>::value || std::is_pointer<decltype(g)>::value, "internal error");
       decltype(auto) cont = deref_is_wrapped(__cont);
       static_assert(std::is_reference<decltype(cont)>::value || std::is_pointer<decltype(cont)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
         reconstruct(g,cont); // the call is here. It sets up "result" : sets up in the python layer.
         Py_INCREF(Py_None);
         py_result = Py_None;
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. reconstruct(triqs::gfs::gf_view<imfreq> g, som_core cont) -> void \n.. in implementation of function som_core.reconstruct", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[1] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[1] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload reconstruct(triqs::gfs::gf_view<imfreq> g, som_core cont) -> void
    {// overload reconstruct(triqs::gfs::gf_view<legendre> g, som_core cont) -> void
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_view<legendre>>, triqs::gfs::gf_view<legendre> *, triqs::gfs::gf_view<legendre>>;
     _type_0 __g = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<som_core>, som_core *, som_core>;
     _type_1 __cont = _type_1{}; // not default for wrapped type please
     static const char *kwlist[] = {"g","cont",NULL};
     static const char * format = "O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_view<legendre>> ,&__g,converter_for_parser<som_core> ,&__cont))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g = deref_is_wrapped(__g);
       static_assert(std::is_reference<decltype(g)>::value || std::is_pointer<decltype(g)>::value, "internal error");
       decltype(auto) cont = deref_is_wrapped(__cont);
       static_assert(std::is_reference<decltype(cont)>::value || std::is_pointer<decltype(cont)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
         reconstruct(g,cont); // the call is here. It sets up "result" : sets up in the python layer.
         Py_INCREF(Py_None);
         py_result = Py_None;
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. reconstruct(triqs::gfs::gf_view<legendre> g, som_core cont) -> void \n.. in implementation of function som_core.reconstruct", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[2] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[2] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload reconstruct(triqs::gfs::gf_view<legendre> g, som_core cont) -> void
    {// overload reconstruct(triqs::gfs::gf_view<imtime> g, observable_kind kind, std::vector<configuration> solutions) -> void
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_view<imtime>>, triqs::gfs::gf_view<imtime> *, triqs::gfs::gf_view<imtime>>;
     _type_0 __g = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<observable_kind>, observable_kind *, observable_kind>;
     _type_1 __kind = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<std::vector<configuration>>, std::vector<configuration> *, std::vector<configuration>>;
     _type_2 __solutions = _type_2{}; // not default for wrapped type please
     static const char *kwlist[] = {"g","kind","solutions",NULL};
     static const char * format = "O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_view<imtime>> ,&__g,converter_for_parser<observable_kind> ,&__kind,converter_for_parser<std::vector<configuration>> ,&__solutions))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g = deref_is_wrapped(__g);
       static_assert(std::is_reference<decltype(g)>::value || std::is_pointer<decltype(g)>::value, "internal error");
       decltype(auto) kind = deref_is_wrapped(__kind);
       static_assert(std::is_reference<decltype(kind)>::value || std::is_pointer<decltype(kind)>::value, "internal error");
       decltype(auto) solutions = deref_is_wrapped(__solutions);
       static_assert(std::is_reference<decltype(solutions)>::value || std::is_pointer<decltype(solutions)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
         reconstruct(g,kind,solutions); // the call is here. It sets up "result" : sets up in the python layer.
         Py_INCREF(Py_None);
         py_result = Py_None;
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. reconstruct(triqs::gfs::gf_view<imtime> g, observable_kind kind, std::vector<configuration> solutions) -> void \n.. in implementation of function som_core.reconstruct", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[3] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[3] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload reconstruct(triqs::gfs::gf_view<imtime> g, observable_kind kind, std::vector<configuration> solutions) -> void
    {// overload reconstruct(triqs::gfs::gf_view<imfreq> g, observable_kind kind, std::vector<configuration> solutions) -> void
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_view<imfreq>>, triqs::gfs::gf_view<imfreq> *, triqs::gfs::gf_view<imfreq>>;
     _type_0 __g = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<observable_kind>, observable_kind *, observable_kind>;
     _type_1 __kind = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<std::vector<configuration>>, std::vector<configuration> *, std::vector<configuration>>;
     _type_2 __solutions = _type_2{}; // not default for wrapped type please
     static const char *kwlist[] = {"g","kind","solutions",NULL};
     static const char * format = "O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_view<imfreq>> ,&__g,converter_for_parser<observable_kind> ,&__kind,converter_for_parser<std::vector<configuration>> ,&__solutions))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g = deref_is_wrapped(__g);
       static_assert(std::is_reference<decltype(g)>::value || std::is_pointer<decltype(g)>::value, "internal error");
       decltype(auto) kind = deref_is_wrapped(__kind);
       static_assert(std::is_reference<decltype(kind)>::value || std::is_pointer<decltype(kind)>::value, "internal error");
       decltype(auto) solutions = deref_is_wrapped(__solutions);
       static_assert(std::is_reference<decltype(solutions)>::value || std::is_pointer<decltype(solutions)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
         reconstruct(g,kind,solutions); // the call is here. It sets up "result" : sets up in the python layer.
         Py_INCREF(Py_None);
         py_result = Py_None;
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. reconstruct(triqs::gfs::gf_view<imfreq> g, observable_kind kind, std::vector<configuration> solutions) -> void \n.. in implementation of function som_core.reconstruct", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[4] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[4] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload reconstruct(triqs::gfs::gf_view<imfreq> g, observable_kind kind, std::vector<configuration> solutions) -> void
    {// overload reconstruct(triqs::gfs::gf_view<legendre> g, observable_kind kind, std::vector<configuration> solutions) -> void
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_view<legendre>>, triqs::gfs::gf_view<legendre> *, triqs::gfs::gf_view<legendre>>;
     _type_0 __g = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<observable_kind>, observable_kind *, observable_kind>;
     _type_1 __kind = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<std::vector<configuration>>, std::vector<configuration> *, std::vector<configuration>>;
     _type_2 __solutions = _type_2{}; // not default for wrapped type please
     static const char *kwlist[] = {"g","kind","solutions",NULL};
     static const char * format = "O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_view<legendre>> ,&__g,converter_for_parser<observable_kind> ,&__kind,converter_for_parser<std::vector<configuration>> ,&__solutions))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g = deref_is_wrapped(__g);
       static_assert(std::is_reference<decltype(g)>::value || std::is_pointer<decltype(g)>::value, "internal error");
       decltype(auto) kind = deref_is_wrapped(__kind);
       static_assert(std::is_reference<decltype(kind)>::value || std::is_pointer<decltype(kind)>::value, "internal error");
       decltype(auto) solutions = deref_is_wrapped(__solutions);
       static_assert(std::is_reference<decltype(solutions)>::value || std::is_pointer<decltype(solutions)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
         reconstruct(g,kind,solutions); // the call is here. It sets up "result" : sets up in the python layer.
         Py_INCREF(Py_None);
         py_result = Py_None;
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. reconstruct(triqs::gfs::gf_view<legendre> g, observable_kind kind, std::vector<configuration> solutions) -> void \n.. in implementation of function som_core.reconstruct", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[5] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[5] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload reconstruct(triqs::gfs::gf_view<legendre> g, observable_kind kind, std::vector<configuration> solutions) -> void

   static const char * overloads_signatures[] = {"reconstruct(triqs::gfs::gf_view<imtime> g, som_core cont) -> void", "reconstruct(triqs::gfs::gf_view<imfreq> g, som_core cont) -> void", "reconstruct(triqs::gfs::gf_view<legendre> g, som_core cont) -> void", "reconstruct(triqs::gfs::gf_view<imtime> g, observable_kind kind, std::vector<configuration> solutions) -> void", "reconstruct(triqs::gfs::gf_view<imfreq> g, observable_kind kind, std::vector<configuration> solutions) -> void", "reconstruct(triqs::gfs::gf_view<legendre> g, observable_kind kind, std::vector<configuration> solutions) -> void"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of function som_core.reconstruct\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* Rectangle___call__(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload operator()(double eps) -> double
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<double>, double *, double>;
     _type_0 __eps = _type_0{}; // not default for wrapped type please
     static const char *kwlist[] = {"eps",NULL};
     static const char * format = "d";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	 ,&__eps))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) eps = deref_is_wrapped(__eps);
       static_assert(std::is_reference<decltype(eps)>::value || std::is_pointer<decltype(eps)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<rectangle>(self);
      try {
        
        double result =  self_c.operator()(eps); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. operator()(double eps) -> double \n.. in implementation of method Rectangle.__call__", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload operator()(double eps) -> double

   static const char * overloads_signatures[] = {"operator()(double eps) -> double"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method Rectangle.__call__\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* Configuration___write_hdf5__(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload __write_hdf5__(h5::group gr, std::string key) -> void
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<h5::group>, h5::group *, h5::group>;
     _type_0 __gr = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<std::string>, std::string *, std::string>;
     _type_1 __key = _type_1{}; // not default for wrapped type please
     static const char *kwlist[] = {"gr","key",NULL};
     static const char * format = "O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<h5::group> ,&__gr,converter_for_parser<std::string> ,&__key))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) gr = deref_is_wrapped(__gr);
       static_assert(std::is_reference<decltype(gr)>::value || std::is_pointer<decltype(gr)>::value, "internal error");
       decltype(auto) key = deref_is_wrapped(__key);
       static_assert(std::is_reference<decltype(key)>::value || std::is_pointer<decltype(key)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<configuration>(self);
      try {
        
        h5_write(gr, key, self_c);; // the call is here. It sets up "result" : sets up in the python layer.
         Py_INCREF(Py_None);
         py_result = Py_None;
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. __write_hdf5__(h5::group gr, std::string key) -> void \n.. in implementation of method Configuration.__write_hdf5__", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload __write_hdf5__(h5::group gr, std::string key) -> void

   static const char * overloads_signatures[] = {"__write_hdf5__(h5::group gr, std::string key) -> void"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method Configuration.__write_hdf5__\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* Configuration___getitem__impl(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload operator[](int i) -> rectangle
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<int>, int *, int>;
     _type_0 __i = _type_0{}; // not default for wrapped type please
     static const char *kwlist[] = {"i",NULL};
     static const char * format = "i";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	 ,&__i))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) i = deref_is_wrapped(__i);
       static_assert(std::is_reference<decltype(i)>::value || std::is_pointer<decltype(i)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<configuration>(self);
      try {
        
        
                  int len = self_c.size();
                  if((i < -len) || (i >= len)) CPP2PY_RUNTIME_ERROR << "Rectangle index " << i << " is out of bounds";
                  auto const& result = self_c[i >= 0 ? i : len + i];
              ; // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. operator[](int i) -> rectangle \n.. in implementation of method Configuration.__getitem__impl", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload operator[](int i) -> rectangle

   static const char * overloads_signatures[] = {"operator[](int i) -> rectangle"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method Configuration.__getitem__impl\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* Configuration___call__(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload operator()(double eps) -> double
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<double>, double *, double>;
     _type_0 __eps = _type_0{}; // not default for wrapped type please
     static const char *kwlist[] = {"eps",NULL};
     static const char * format = "d";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	 ,&__eps))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) eps = deref_is_wrapped(__eps);
       static_assert(std::is_reference<decltype(eps)>::value || std::is_pointer<decltype(eps)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<configuration>(self);
      try {
        
        double result =  self_c.operator()(eps); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. operator()(double eps) -> double \n.. in implementation of method Configuration.__call__", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload operator()(double eps) -> double

   static const char * overloads_signatures[] = {"operator()(double eps) -> double"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method Configuration.__call__\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* SomCore_adjust_f(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload adjust_f() -> int
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<som_core>(self);
      try {
        if (PySequence_Size(args)>0) {PyErr_SetString(PyExc_TypeError, "The function must be called only with named arguments"); goto error_return;}
           if (!convertible_from_python<som::adjust_f_parameters_t>(keywds,true)) goto error_return;
           auto dict_transcript = convert_from_python<som::adjust_f_parameters_t>(keywds);
        
        int result =  self_c.adjust_f(dict_transcript); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. adjust_f() -> int \n.. in implementation of method SomCore.adjust_f", NULL);
     }
    } // end overload adjust_f() -> int

   static const char * overloads_signatures[] = {"adjust_f() -> int"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method SomCore.adjust_f\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* SomCore_accumulate(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload accumulate() -> void
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<som_core>(self);
      try {
        if (PySequence_Size(args)>0) {PyErr_SetString(PyExc_TypeError, "The function must be called only with named arguments"); goto error_return;}
           if (!convertible_from_python<som::accumulate_parameters_t>(keywds,true)) goto error_return;
           auto dict_transcript = convert_from_python<som::accumulate_parameters_t>(keywds);
        
         PyOS_sighandler_t sig = PyOS_getsig(SIGINT);
         cpp2py::signal_handler::start(); // start the C++ signal handler
         Py_BEGIN_ALLOW_THREADS;
	 try {
         self_c.accumulate(dict_transcript); // the call is here. It sets up "result" : sets up in the python layer.
	 }
	 catch(...) {
	   // an error has occurred : clean GIL, handler and rethrow
           Py_BLOCK_THREADS; // cf python include, ceval.h, line 72 comments and below.
           cpp2py::signal_handler::stop(); // stop the C++ signal handler
           PyOS_setsig(SIGINT, sig);
           throw; //
	 }
         Py_END_ALLOW_THREADS;
         cpp2py::signal_handler::stop();
         PyOS_setsig(SIGINT, sig);
         Py_INCREF(Py_None);
         py_result = Py_None;
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. accumulate() -> void \n.. in implementation of method SomCore.accumulate", NULL);
     }
    } // end overload accumulate() -> void

   static const char * overloads_signatures[] = {"accumulate() -> void"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method SomCore.accumulate\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* SomCore_run(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload run() -> void
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<som_core>(self);
      try {
        if (PySequence_Size(args)>0) {PyErr_SetString(PyExc_TypeError, "The function must be called only with named arguments"); goto error_return;}
           if (!convertible_from_python<som::accumulate_parameters_t>(keywds,true)) goto error_return;
           auto dict_transcript = convert_from_python<som::accumulate_parameters_t>(keywds);
        
         self_c.run(dict_transcript); // the call is here. It sets up "result" : sets up in the python layer.
         Py_INCREF(Py_None);
         py_result = Py_None;
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. run() -> void \n.. in implementation of method SomCore.run", NULL);
     }
    } // end overload run() -> void

   static const char * overloads_signatures[] = {"run() -> void"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method SomCore.run\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* SomCore_compute_final_solution(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload compute_final_solution(double good_chi_rel, double good_chi_abs, int verbosity) -> std::vector<double>
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<double>, double *, double>;
     _type_0 __good_chi_rel =  2.0; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<double>, double *, double>;
     _type_1 __good_chi_abs =  HUGE_VAL; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<int>, int *, int>;
     _type_2 __verbosity =  0; // not default for wrapped type please
     static const char *kwlist[] = {"good_chi_rel","good_chi_abs","verbosity",NULL};
     static const char * format = "|ddi";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	 ,&__good_chi_rel ,&__good_chi_abs ,&__verbosity))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) good_chi_rel = deref_is_wrapped(__good_chi_rel);
       static_assert(std::is_reference<decltype(good_chi_rel)>::value || std::is_pointer<decltype(good_chi_rel)>::value, "internal error");
       decltype(auto) good_chi_abs = deref_is_wrapped(__good_chi_abs);
       static_assert(std::is_reference<decltype(good_chi_abs)>::value || std::is_pointer<decltype(good_chi_abs)>::value, "internal error");
       decltype(auto) verbosity = deref_is_wrapped(__verbosity);
       static_assert(std::is_reference<decltype(verbosity)>::value || std::is_pointer<decltype(verbosity)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<som_core>(self);
      try {
        
        std::vector<double> result =  self_c.compute_final_solution(good_chi_rel,good_chi_abs,verbosity); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. compute_final_solution(double good_chi_rel, double good_chi_abs, int verbosity) -> std::vector<double> \n.. in implementation of method SomCore.compute_final_solution", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload compute_final_solution(double good_chi_rel, double good_chi_abs, int verbosity) -> std::vector<double>

   static const char * overloads_signatures[] = {"compute_final_solution(double good_chi_rel, double good_chi_abs, int verbosity) -> std::vector<double>"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method SomCore.compute_final_solution\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* SomCore_compute_final_solution_cc(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload compute_final_solution_cc() -> std::vector<double>
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<som_core>(self);
      try {
        if (PySequence_Size(args)>0) {PyErr_SetString(PyExc_TypeError, "The function must be called only with named arguments"); goto error_return;}
           if (!convertible_from_python<som::final_solution_cc_parameters_t>(keywds,true)) goto error_return;
           auto dict_transcript = convert_from_python<som::final_solution_cc_parameters_t>(keywds);
        
        std::vector<double> result =  self_c.compute_final_solution_cc(dict_transcript); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. compute_final_solution_cc() -> std::vector<double> \n.. in implementation of method SomCore.compute_final_solution_cc", NULL);
     }
    } // end overload compute_final_solution_cc() -> std::vector<double>

   static const char * overloads_signatures[] = {"compute_final_solution_cc() -> std::vector<double>"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method SomCore.compute_final_solution_cc\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* SomCore_clear(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload clear() -> void
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     static const char *kwlist[] = {NULL};
     static const char * format = "";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<som_core>(self);
      try {
        
         self_c.clear(); // the call is here. It sets up "result" : sets up in the python layer.
         Py_INCREF(Py_None);
         py_result = Py_None;
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. clear() -> void \n.. in implementation of method SomCore.clear", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload clear() -> void

   static const char * overloads_signatures[] = {"clear() -> void"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method SomCore.clear\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* SomCore_particular_solutions(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload get_particular_solutions(long i) -> std::vector<std::pair<configuration, double>>
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<long>, long *, long>;
     _type_0 __i = _type_0{}; // not default for wrapped type please
     static const char *kwlist[] = {"i",NULL};
     static const char * format = "O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<long> ,&__i))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) i = deref_is_wrapped(__i);
       static_assert(std::is_reference<decltype(i)>::value || std::is_pointer<decltype(i)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<som_core>(self);
      try {
        
        std::vector<std::pair<configuration, double>> result =  self_c.get_particular_solutions(i); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. get_particular_solutions(long i) -> std::vector<std::pair<configuration, double>> \n.. in implementation of method SomCore.particular_solutions", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload get_particular_solutions(long i) -> std::vector<std::pair<configuration, double>>

   static const char * overloads_signatures[] = {"get_particular_solutions(long i) -> std::vector<std::pair<configuration, double>>"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method SomCore.particular_solutions\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* SomCore_solution(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload get_solution(long i) -> configuration
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<long>, long *, long>;
     _type_0 __i = _type_0{}; // not default for wrapped type please
     static const char *kwlist[] = {"i",NULL};
     static const char * format = "O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<long> ,&__i))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) i = deref_is_wrapped(__i);
       static_assert(std::is_reference<decltype(i)>::value || std::is_pointer<decltype(i)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<som_core>(self);
      try {
        
        configuration result =  self_c.get_solution(i); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. get_solution(long i) -> configuration \n.. in implementation of method SomCore.solution", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload get_solution(long i) -> configuration

   static const char * overloads_signatures[] = {"get_solution(long i) -> configuration"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method SomCore.solution\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* SomCore_objf(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload get_objf(long i) -> double
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<long>, long *, long>;
     _type_0 __i = _type_0{}; // not default for wrapped type please
     static const char *kwlist[] = {"i",NULL};
     static const char * format = "O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<long> ,&__i))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) i = deref_is_wrapped(__i);
       static_assert(std::is_reference<decltype(i)>::value || std::is_pointer<decltype(i)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<som_core>(self);
      try {
        
        double result =  self_c.get_objf(i); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. get_objf(long i) -> double \n.. in implementation of method SomCore.objf", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload get_objf(long i) -> double

   static const char * overloads_signatures[] = {"get_objf(long i) -> double"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method SomCore.objf\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static PyObject* SomCore_histogram(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 1;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload get_histogram(long i) -> std::optional<histogram>
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<long>, long *, long>;
     _type_0 __i = _type_0{}; // not default for wrapped type please
     static const char *kwlist[] = {"i",NULL};
     static const char * format = "O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<long> ,&__i))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) i = deref_is_wrapped(__i);
       static_assert(std::is_reference<decltype(i)>::value || std::is_pointer<decltype(i)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      auto & self_c = convert_from_python<som_core>(self);
      try {
        
        std::optional<histogram> result =  self_c.get_histogram(i); // the call is here. It sets up "result" : sets up in the python layer.
         py_result = convert_to_python(std::move(result));
        return py_result;
      }
      CATCH_AND_RETURN(".. calling C++ overload \n.. get_histogram(long i) -> std::optional<histogram> \n.. in implementation of method SomCore.histogram", NULL);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload get_histogram(long i) -> std::optional<histogram>

   static const char * overloads_signatures[] = {"get_histogram(long i) -> std::optional<histogram>"};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method SomCore.histogram\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return NULL;
 }

 static int SomCore___init__(PyObject *self, PyObject *args, PyObject *keywds) {

  static constexpr int n_overloads = 6;

  [[maybe_unused]] PyObject * py_result; //final result, except for constructor

  std::array<pyref,n_overloads> errors;

  // If no overload, we avoid the err_list and let the error go through (to save some code).
    {// overload (no C++ name)(triqs::gfs::gf_const_view<imtime> g, triqs::gfs::gf_const_view<imtime> error_bars, som::observable_kind kind, vector<double> norms) -> 
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_const_view<imtime>>, triqs::gfs::gf_const_view<imtime> *, triqs::gfs::gf_const_view<imtime>>;
     _type_0 __g = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_const_view<imtime>>, triqs::gfs::gf_const_view<imtime> *, triqs::gfs::gf_const_view<imtime>>;
     _type_1 __error_bars = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<som::observable_kind>, som::observable_kind *, som::observable_kind>;
     _type_2 __kind = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<vector<double>>, vector<double> *, vector<double>>;
     _type_3 __norms = _type_3{}; // not default for wrapped type please
     static const char *kwlist[] = {"g","error_bars","kind","norms",NULL};
     static const char * format = "O&O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_const_view<imtime>> ,&__g,converter_for_parser<triqs::gfs::gf_const_view<imtime>> ,&__error_bars,converter_for_parser<som::observable_kind> ,&__kind,converter_for_parser<vector<double>> ,&__norms))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g = deref_is_wrapped(__g);
       static_assert(std::is_reference<decltype(g)>::value || std::is_pointer<decltype(g)>::value, "internal error");
       decltype(auto) error_bars = deref_is_wrapped(__error_bars);
       static_assert(std::is_reference<decltype(error_bars)>::value || std::is_pointer<decltype(error_bars)>::value, "internal error");
       decltype(auto) kind = deref_is_wrapped(__kind);
       static_assert(std::is_reference<decltype(kind)>::value || std::is_pointer<decltype(kind)>::value, "internal error");
       decltype(auto) norms = deref_is_wrapped(__norms);
       static_assert(std::is_reference<decltype(norms)>::value || std::is_pointer<decltype(norms)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        ((SomCore *)self)->_c = new som_core (g,error_bars,kind,norms);; // the call is here. It sets up "result" : sets up in the python layer.
        return 0;
      }
      CATCH_AND_RETURN (".. in calling C++ overload of constructor :\n.. (no C++ name)(triqs::gfs::gf_const_view<imtime> g, triqs::gfs::gf_const_view<imtime> error_bars, som::observable_kind kind, vector<double> norms) -> ",-1);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[0] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[0] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload (no C++ name)(triqs::gfs::gf_const_view<imtime> g, triqs::gfs::gf_const_view<imtime> error_bars, som::observable_kind kind, vector<double> norms) -> 
    {// overload (no C++ name)(triqs::gfs::gf_const_view<imtime> g, som_core::cov_matrices_gf_view_type<imtime> cov_matrices, som::observable_kind kind, vector<double> norms, vector<double> filtering_levels) -> 
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_const_view<imtime>>, triqs::gfs::gf_const_view<imtime> *, triqs::gfs::gf_const_view<imtime>>;
     _type_0 __g = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<som_core::cov_matrices_gf_view_type<imtime>>, som_core::cov_matrices_gf_view_type<imtime> *, som_core::cov_matrices_gf_view_type<imtime>>;
     _type_1 __cov_matrices = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<som::observable_kind>, som::observable_kind *, som::observable_kind>;
     _type_2 __kind = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<vector<double>>, vector<double> *, vector<double>>;
     _type_3 __norms = _type_3{}; // not default for wrapped type please
     using _type_4 = std::conditional_t<is_wrapped_v<vector<double>>, vector<double> *, vector<double>>;
     _type_4 __filtering_levels =  {}; // not default for wrapped type please
     static const char *kwlist[] = {"g","cov_matrices","kind","norms","filtering_levels",NULL};
     static const char * format = "O&O&O&O&|O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_const_view<imtime>> ,&__g,converter_for_parser<som_core::cov_matrices_gf_view_type<imtime>> ,&__cov_matrices,converter_for_parser<som::observable_kind> ,&__kind,converter_for_parser<vector<double>> ,&__norms,converter_for_parser<vector<double>> ,&__filtering_levels))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g = deref_is_wrapped(__g);
       static_assert(std::is_reference<decltype(g)>::value || std::is_pointer<decltype(g)>::value, "internal error");
       decltype(auto) cov_matrices = deref_is_wrapped(__cov_matrices);
       static_assert(std::is_reference<decltype(cov_matrices)>::value || std::is_pointer<decltype(cov_matrices)>::value, "internal error");
       decltype(auto) kind = deref_is_wrapped(__kind);
       static_assert(std::is_reference<decltype(kind)>::value || std::is_pointer<decltype(kind)>::value, "internal error");
       decltype(auto) norms = deref_is_wrapped(__norms);
       static_assert(std::is_reference<decltype(norms)>::value || std::is_pointer<decltype(norms)>::value, "internal error");
       decltype(auto) filtering_levels = deref_is_wrapped(__filtering_levels);
       static_assert(std::is_reference<decltype(filtering_levels)>::value || std::is_pointer<decltype(filtering_levels)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        ((SomCore *)self)->_c = new som_core (g,cov_matrices,kind,norms,filtering_levels);; // the call is here. It sets up "result" : sets up in the python layer.
        return 0;
      }
      CATCH_AND_RETURN (".. in calling C++ overload of constructor :\n.. (no C++ name)(triqs::gfs::gf_const_view<imtime> g, som_core::cov_matrices_gf_view_type<imtime> cov_matrices, som::observable_kind kind, vector<double> norms, vector<double> filtering_levels) -> ",-1);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[1] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[1] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload (no C++ name)(triqs::gfs::gf_const_view<imtime> g, som_core::cov_matrices_gf_view_type<imtime> cov_matrices, som::observable_kind kind, vector<double> norms, vector<double> filtering_levels) -> 
    {// overload (no C++ name)(triqs::gfs::gf_const_view<imfreq> g, triqs::gfs::gf_const_view<imfreq> error_bars, som::observable_kind kind, vector<double> norms) -> 
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_const_view<imfreq>>, triqs::gfs::gf_const_view<imfreq> *, triqs::gfs::gf_const_view<imfreq>>;
     _type_0 __g = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_const_view<imfreq>>, triqs::gfs::gf_const_view<imfreq> *, triqs::gfs::gf_const_view<imfreq>>;
     _type_1 __error_bars = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<som::observable_kind>, som::observable_kind *, som::observable_kind>;
     _type_2 __kind = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<vector<double>>, vector<double> *, vector<double>>;
     _type_3 __norms = _type_3{}; // not default for wrapped type please
     static const char *kwlist[] = {"g","error_bars","kind","norms",NULL};
     static const char * format = "O&O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_const_view<imfreq>> ,&__g,converter_for_parser<triqs::gfs::gf_const_view<imfreq>> ,&__error_bars,converter_for_parser<som::observable_kind> ,&__kind,converter_for_parser<vector<double>> ,&__norms))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g = deref_is_wrapped(__g);
       static_assert(std::is_reference<decltype(g)>::value || std::is_pointer<decltype(g)>::value, "internal error");
       decltype(auto) error_bars = deref_is_wrapped(__error_bars);
       static_assert(std::is_reference<decltype(error_bars)>::value || std::is_pointer<decltype(error_bars)>::value, "internal error");
       decltype(auto) kind = deref_is_wrapped(__kind);
       static_assert(std::is_reference<decltype(kind)>::value || std::is_pointer<decltype(kind)>::value, "internal error");
       decltype(auto) norms = deref_is_wrapped(__norms);
       static_assert(std::is_reference<decltype(norms)>::value || std::is_pointer<decltype(norms)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        ((SomCore *)self)->_c = new som_core (g,error_bars,kind,norms);; // the call is here. It sets up "result" : sets up in the python layer.
        return 0;
      }
      CATCH_AND_RETURN (".. in calling C++ overload of constructor :\n.. (no C++ name)(triqs::gfs::gf_const_view<imfreq> g, triqs::gfs::gf_const_view<imfreq> error_bars, som::observable_kind kind, vector<double> norms) -> ",-1);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[2] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[2] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload (no C++ name)(triqs::gfs::gf_const_view<imfreq> g, triqs::gfs::gf_const_view<imfreq> error_bars, som::observable_kind kind, vector<double> norms) -> 
    {// overload (no C++ name)(triqs::gfs::gf_const_view<imfreq> g, som_core::cov_matrices_gf_view_type<imfreq> cov_matrices, som::observable_kind kind, vector<double> norms, vector<double> filtering_levels) -> 
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_const_view<imfreq>>, triqs::gfs::gf_const_view<imfreq> *, triqs::gfs::gf_const_view<imfreq>>;
     _type_0 __g = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<som_core::cov_matrices_gf_view_type<imfreq>>, som_core::cov_matrices_gf_view_type<imfreq> *, som_core::cov_matrices_gf_view_type<imfreq>>;
     _type_1 __cov_matrices = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<som::observable_kind>, som::observable_kind *, som::observable_kind>;
     _type_2 __kind = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<vector<double>>, vector<double> *, vector<double>>;
     _type_3 __norms = _type_3{}; // not default for wrapped type please
     using _type_4 = std::conditional_t<is_wrapped_v<vector<double>>, vector<double> *, vector<double>>;
     _type_4 __filtering_levels =  {}; // not default for wrapped type please
     static const char *kwlist[] = {"g","cov_matrices","kind","norms","filtering_levels",NULL};
     static const char * format = "O&O&O&O&|O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_const_view<imfreq>> ,&__g,converter_for_parser<som_core::cov_matrices_gf_view_type<imfreq>> ,&__cov_matrices,converter_for_parser<som::observable_kind> ,&__kind,converter_for_parser<vector<double>> ,&__norms,converter_for_parser<vector<double>> ,&__filtering_levels))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g = deref_is_wrapped(__g);
       static_assert(std::is_reference<decltype(g)>::value || std::is_pointer<decltype(g)>::value, "internal error");
       decltype(auto) cov_matrices = deref_is_wrapped(__cov_matrices);
       static_assert(std::is_reference<decltype(cov_matrices)>::value || std::is_pointer<decltype(cov_matrices)>::value, "internal error");
       decltype(auto) kind = deref_is_wrapped(__kind);
       static_assert(std::is_reference<decltype(kind)>::value || std::is_pointer<decltype(kind)>::value, "internal error");
       decltype(auto) norms = deref_is_wrapped(__norms);
       static_assert(std::is_reference<decltype(norms)>::value || std::is_pointer<decltype(norms)>::value, "internal error");
       decltype(auto) filtering_levels = deref_is_wrapped(__filtering_levels);
       static_assert(std::is_reference<decltype(filtering_levels)>::value || std::is_pointer<decltype(filtering_levels)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        ((SomCore *)self)->_c = new som_core (g,cov_matrices,kind,norms,filtering_levels);; // the call is here. It sets up "result" : sets up in the python layer.
        return 0;
      }
      CATCH_AND_RETURN (".. in calling C++ overload of constructor :\n.. (no C++ name)(triqs::gfs::gf_const_view<imfreq> g, som_core::cov_matrices_gf_view_type<imfreq> cov_matrices, som::observable_kind kind, vector<double> norms, vector<double> filtering_levels) -> ",-1);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[3] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[3] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload (no C++ name)(triqs::gfs::gf_const_view<imfreq> g, som_core::cov_matrices_gf_view_type<imfreq> cov_matrices, som::observable_kind kind, vector<double> norms, vector<double> filtering_levels) -> 
    {// overload (no C++ name)(triqs::gfs::gf_const_view<legendre> g, triqs::gfs::gf_const_view<legendre> error_bars, som::observable_kind kind, vector<double> norms) -> 
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_const_view<legendre>>, triqs::gfs::gf_const_view<legendre> *, triqs::gfs::gf_const_view<legendre>>;
     _type_0 __g = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_const_view<legendre>>, triqs::gfs::gf_const_view<legendre> *, triqs::gfs::gf_const_view<legendre>>;
     _type_1 __error_bars = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<som::observable_kind>, som::observable_kind *, som::observable_kind>;
     _type_2 __kind = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<vector<double>>, vector<double> *, vector<double>>;
     _type_3 __norms = _type_3{}; // not default for wrapped type please
     static const char *kwlist[] = {"g","error_bars","kind","norms",NULL};
     static const char * format = "O&O&O&O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_const_view<legendre>> ,&__g,converter_for_parser<triqs::gfs::gf_const_view<legendre>> ,&__error_bars,converter_for_parser<som::observable_kind> ,&__kind,converter_for_parser<vector<double>> ,&__norms))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g = deref_is_wrapped(__g);
       static_assert(std::is_reference<decltype(g)>::value || std::is_pointer<decltype(g)>::value, "internal error");
       decltype(auto) error_bars = deref_is_wrapped(__error_bars);
       static_assert(std::is_reference<decltype(error_bars)>::value || std::is_pointer<decltype(error_bars)>::value, "internal error");
       decltype(auto) kind = deref_is_wrapped(__kind);
       static_assert(std::is_reference<decltype(kind)>::value || std::is_pointer<decltype(kind)>::value, "internal error");
       decltype(auto) norms = deref_is_wrapped(__norms);
       static_assert(std::is_reference<decltype(norms)>::value || std::is_pointer<decltype(norms)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        ((SomCore *)self)->_c = new som_core (g,error_bars,kind,norms);; // the call is here. It sets up "result" : sets up in the python layer.
        return 0;
      }
      CATCH_AND_RETURN (".. in calling C++ overload of constructor :\n.. (no C++ name)(triqs::gfs::gf_const_view<legendre> g, triqs::gfs::gf_const_view<legendre> error_bars, som::observable_kind kind, vector<double> norms) -> ",-1);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[4] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[4] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload (no C++ name)(triqs::gfs::gf_const_view<legendre> g, triqs::gfs::gf_const_view<legendre> error_bars, som::observable_kind kind, vector<double> norms) -> 
    {// overload (no C++ name)(triqs::gfs::gf_const_view<legendre> g, som_core::cov_matrices_gf_view_type<legendre> cov_matrices, som::observable_kind kind, vector<double> norms, vector<double> filtering_levels) -> 
     // define the variable to be filled by the parsing method
     // wrapped types are converted to a pointer, other converted types to a value or a view
     using _type_0 = std::conditional_t<is_wrapped_v<triqs::gfs::gf_const_view<legendre>>, triqs::gfs::gf_const_view<legendre> *, triqs::gfs::gf_const_view<legendre>>;
     _type_0 __g = _type_0{}; // not default for wrapped type please
     using _type_1 = std::conditional_t<is_wrapped_v<som_core::cov_matrices_gf_view_type<legendre>>, som_core::cov_matrices_gf_view_type<legendre> *, som_core::cov_matrices_gf_view_type<legendre>>;
     _type_1 __cov_matrices = _type_1{}; // not default for wrapped type please
     using _type_2 = std::conditional_t<is_wrapped_v<som::observable_kind>, som::observable_kind *, som::observable_kind>;
     _type_2 __kind = _type_2{}; // not default for wrapped type please
     using _type_3 = std::conditional_t<is_wrapped_v<vector<double>>, vector<double> *, vector<double>>;
     _type_3 __norms = _type_3{}; // not default for wrapped type please
     using _type_4 = std::conditional_t<is_wrapped_v<vector<double>>, vector<double> *, vector<double>>;
     _type_4 __filtering_levels =  {}; // not default for wrapped type please
     static const char *kwlist[] = {"g","cov_matrices","kind","norms","filtering_levels",NULL};
     static const char * format = "O&O&O&O&|O&";
     if (PyArg_ParseTupleAndKeywords(args, keywds, format, const_cast<char **>(kwlist)
       	,converter_for_parser<triqs::gfs::gf_const_view<legendre>> ,&__g,converter_for_parser<som_core::cov_matrices_gf_view_type<legendre>> ,&__cov_matrices,converter_for_parser<som::observable_kind> ,&__kind,converter_for_parser<vector<double>> ,&__norms,converter_for_parser<vector<double>> ,&__filtering_levels))
     {
      // redefine the references to remove the * for wrapped type. Allows to use them naturally in C code.
       decltype(auto) g = deref_is_wrapped(__g);
       static_assert(std::is_reference<decltype(g)>::value || std::is_pointer<decltype(g)>::value, "internal error");
       decltype(auto) cov_matrices = deref_is_wrapped(__cov_matrices);
       static_assert(std::is_reference<decltype(cov_matrices)>::value || std::is_pointer<decltype(cov_matrices)>::value, "internal error");
       decltype(auto) kind = deref_is_wrapped(__kind);
       static_assert(std::is_reference<decltype(kind)>::value || std::is_pointer<decltype(kind)>::value, "internal error");
       decltype(auto) norms = deref_is_wrapped(__norms);
       static_assert(std::is_reference<decltype(norms)>::value || std::is_pointer<decltype(norms)>::value, "internal error");
       decltype(auto) filtering_levels = deref_is_wrapped(__filtering_levels);
       static_assert(std::is_reference<decltype(filtering_levels)>::value || std::is_pointer<decltype(filtering_levels)>::value, "internal error");

      // FIXME : calling_pattern ---> lambda -> auto , plus de self.
      try {
        
        ((SomCore *)self)->_c = new som_core (g,cov_matrices,kind,norms,filtering_levels);; // the call is here. It sets up "result" : sets up in the python layer.
        return 0;
      }
      CATCH_AND_RETURN (".. in calling C++ overload of constructor :\n.. (no C++ name)(triqs::gfs::gf_const_view<legendre> g, som_core::cov_matrices_gf_view_type<legendre> cov_matrices, som::observable_kind kind, vector<double> norms, vector<double> filtering_levels) -> ",-1);
     }
     else { // the overload does not parse the arguments. Keep the error set by python, for later use, and clear it.
      PyObject * ptype,  *ptraceback, *err; // unused.
      PyErr_Fetch(&ptype, &err, &ptraceback);
      // catch here all non defined errors and print instead generic warning
      if (err == NULL) {
        errors[5] = pyref{PyUnicode_FromString("unkown error check converter")};
      } else {
        errors[5] = pyref{err};
      }
      Py_XDECREF(ptype);
      Py_XDECREF(ptraceback);
     }
    } // end overload (no C++ name)(triqs::gfs::gf_const_view<legendre> g, som_core::cov_matrices_gf_view_type<legendre> cov_matrices, som::observable_kind kind, vector<double> norms, vector<double> filtering_levels) -> 

   static const char * overloads_signatures[] = {"(no C++ name)(triqs::gfs::gf_const_view<imtime> g, triqs::gfs::gf_const_view<imtime> error_bars, som::observable_kind kind, vector<double> norms) -> ", "(no C++ name)(triqs::gfs::gf_const_view<imtime> g, som_core::cov_matrices_gf_view_type<imtime> cov_matrices, som::observable_kind kind, vector<double> norms, vector<double> filtering_levels) -> ", "(no C++ name)(triqs::gfs::gf_const_view<imfreq> g, triqs::gfs::gf_const_view<imfreq> error_bars, som::observable_kind kind, vector<double> norms) -> ", "(no C++ name)(triqs::gfs::gf_const_view<imfreq> g, som_core::cov_matrices_gf_view_type<imfreq> cov_matrices, som::observable_kind kind, vector<double> norms, vector<double> filtering_levels) -> ", "(no C++ name)(triqs::gfs::gf_const_view<legendre> g, triqs::gfs::gf_const_view<legendre> error_bars, som::observable_kind kind, vector<double> norms) -> ", "(no C++ name)(triqs::gfs::gf_const_view<legendre> g, som_core::cov_matrices_gf_view_type<legendre> cov_matrices, som::observable_kind kind, vector<double> norms, vector<double> filtering_levels) -> "};

   // FIXME Factorize this
   // finally, no overload was successful. Composing a detailed error message, with the reason of failure of each overload
   {
     std::string err_list =
        "Error: no suitable C++ overload found in implementation of method SomCore.__init__\n";
     for (int i = 0; i < errors.size(); ++i) {
      err_list = err_list + "\n" + overloads_signatures[i] + " \n failed with the error : \n  ";
      // check if error is not NULL and can be converted at all
      // otherwise unconvertible erros can lead to SegFaults
      if (errors[i] and PyUnicode_Check((PyObject *)errors[i])) {
        err_list += PyUnicode_AsUTF8((PyObject *)errors[i]);
      } else {
        err_list += "Error message was not convertible to raw string.";
      }
      err_list += "\n";
     }
    PyErr_SetString(PyExc_TypeError,err_list.c_str());
   }
   error_return :
   return -1;
 }

// ------------------------------- Loop on all classes ----------------------------------------------------


//--------------------- define all members  -----------------------------


//--------------------- define all properties  -----------------------------


static PyObject * Rectangle__get_prop_center (PyObject *self, void *closure) {
    auto & self_c = convert_from_python<rectangle>(self);
    auto result = self_c.center; // defines result, which cannot be void (property would return None ??)
       return convert_to_python(std::move(result));
}


static PyObject * Rectangle__get_prop_width (PyObject *self, void *closure) {
    auto & self_c = convert_from_python<rectangle>(self);
    auto result = self_c.width; // defines result, which cannot be void (property would return None ??)
       return convert_to_python(std::move(result));
}


static PyObject * Rectangle__get_prop_height (PyObject *self, void *closure) {
    auto & self_c = convert_from_python<rectangle>(self);
    auto result = self_c.height; // defines result, which cannot be void (property would return None ??)
       return convert_to_python(std::move(result));
}


static PyObject * Rectangle__get_prop_norm (PyObject *self, void *closure) {
    auto & self_c = convert_from_python<rectangle>(self);
    double result =  self_c.norm(); // defines result, which cannot be void (property would return None ??)
       return convert_to_python(std::move(result));
}



//--------------------- [] implementation  -----------------------------


// The __getitem__impl has been implemented with other methods. We redirect the call to the general for (args, kw)
// after rebuilding args.


//--------------------- reduce : default case -----------------------------


static PyObject* Rectangle___reduce__ (PyObject *self, PyObject *args, PyObject *keywds) {
  PyErr_SetString(PyExc_NotImplementedError, "__reduce__ not implemented");
  return NULL;
}

//--------------------- reduce h5 -----------------------------


//--------------------- reduce tuple -----------------------------


//--------------------- reduce repr -----------------------------


//--------------------- repr  -----------------------------


static PyObject* Rectangle___repr__ (PyObject *self) {
  auto & self_c = convert_from_python<rectangle>(self);
  std::stringstream fs; fs << self_c;
  return PyUnicode_FromString(fs.str().c_str());
}

static PyObject* Rectangle___str__ (PyObject *self) {
  auto & self_c = convert_from_python<rectangle>(self);
  std::stringstream fs; fs << self_c;
  return PyUnicode_FromString(fs.str().c_str());
}


//--------------------- comparisons  -----------------------------

static PyObject* Rectangle_richcompare (PyObject *a, PyObject *b, int op) {


 switch(op) {

  case Py_EQ:
   PyErr_SetString(PyExc_TypeError, "Comparison operator == not implemented for type Rectangle");
   return NULL;

  case Py_NE:
   PyErr_SetString(PyExc_TypeError, "Comparison operator != not implemented for type Rectangle");
   return NULL;

  case Py_LT:
   PyErr_SetString(PyExc_TypeError, "Comparison operator < not implemented for type Rectangle");
   return NULL;

  case Py_GT:
   PyErr_SetString(PyExc_TypeError, "Comparison operator > not implemented for type Rectangle");
   return NULL;

  case Py_LE:
   PyErr_SetString(PyExc_TypeError, "Comparison operator <= not implemented for type Rectangle");
   return NULL;

  case Py_GE:
   PyErr_SetString(PyExc_TypeError, "Comparison operator >= not implemented for type Rectangle");
   return NULL;

  default:
    break;
 }
 return NULL;
}

//--------------------- hdf5 part -----------------------------

/// hdf5 is not defined for this object, we still but a function + exception for a clear and early error message.
static PyObject* Rectangle___write_hdf5__ (PyObject *self, PyObject *args) {
  PyErr_SetString(PyExc_NotImplementedError, "No hdf5 support for the object Rectangle");
  return NULL;
 }


//--------------------- Arithmetic implementation -----------------------------
  // IMPROVE ERROR TREATEMENT LIKE OTHER ORDINARY METHODS


//--------------------- Implementation of iterator by wrapping the C++ -----------------------------



//--------------------- define all members  -----------------------------


//--------------------- define all properties  -----------------------------


static PyObject * Configuration__get_prop_norm (PyObject *self, void *closure) {
    auto & self_c = convert_from_python<configuration>(self);
    double result =  self_c.norm(); // defines result, which cannot be void (property would return None ??)
       return convert_to_python(std::move(result));
}



//--------------------- [] implementation  -----------------------------

static Py_ssize_t Configuration___len__(PyObject *self) {
 auto & self_c = convert_from_python<configuration>(self);
 try {
  int result =  self_c.size();
  return result;
 }
 CATCH_AND_RETURN("in calling C++ function for __len__  :\n(no C++ name)(triqs::gfs::gf_const_view<legendre> g, som_core::cov_matrices_gf_view_type<legendre> cov_matrices, som::observable_kind kind, vector<double> norms, vector<double> filtering_levels) -> ", -1);
}

// The __getitem__impl has been implemented with other methods. We redirect the call to the general for (args, kw)
// after rebuilding args.
static PyObject* Configuration___getitem__(PyObject *self, PyObject *key) {
 pyref args =  (PyTuple_Check(key) ? cpp2py::borrowed(key) : pyref(PyTuple_Pack(1,key)));
 return Configuration___getitem__impl(self,args,NULL);
}


//--------------------- reduce : default case -----------------------------


static PyObject* Configuration___reduce__ (PyObject *self, PyObject *args, PyObject *keywds) {
  PyErr_SetString(PyExc_NotImplementedError, "__reduce__ not implemented");
  return NULL;
}

//--------------------- reduce h5 -----------------------------


//--------------------- reduce tuple -----------------------------


//--------------------- reduce repr -----------------------------


//--------------------- repr  -----------------------------


static PyObject* Configuration___repr__ (PyObject *self) {
  auto & self_c = convert_from_python<configuration>(self);
  std::stringstream fs; fs << self_c;
  return PyUnicode_FromString(fs.str().c_str());
}

static PyObject* Configuration___str__ (PyObject *self) {
  auto & self_c = convert_from_python<configuration>(self);
  std::stringstream fs; fs << self_c;
  return PyUnicode_FromString(fs.str().c_str());
}


//--------------------- comparisons  -----------------------------

static PyObject* Configuration_richcompare (PyObject *a, PyObject *b, int op) {


 switch(op) {

  case Py_EQ:
   PyErr_SetString(PyExc_TypeError, "Comparison operator == not implemented for type Configuration");
   return NULL;

  case Py_NE:
   PyErr_SetString(PyExc_TypeError, "Comparison operator != not implemented for type Configuration");
   return NULL;

  case Py_LT:
   PyErr_SetString(PyExc_TypeError, "Comparison operator < not implemented for type Configuration");
   return NULL;

  case Py_GT:
   PyErr_SetString(PyExc_TypeError, "Comparison operator > not implemented for type Configuration");
   return NULL;

  case Py_LE:
   PyErr_SetString(PyExc_TypeError, "Comparison operator <= not implemented for type Configuration");
   return NULL;

  case Py_GE:
   PyErr_SetString(PyExc_TypeError, "Comparison operator >= not implemented for type Configuration");
   return NULL;

  default:
    break;
 }
 return NULL;
}

//--------------------- hdf5 part -----------------------------

// FIXME pass by the ordinary calls....
// FIXME Py_RETURN_NONE : in the usual call.
static PyObject* Configuration___write_hdf5__ (PyObject *self, PyObject *args) {
  h5::group * gr_ptr;
  const char * key;
  if (!PyArg_ParseTuple(args, "O&s", converter_for_parser<h5::group>, &gr_ptr, &key)) return NULL;
  auto & self_c = convert_from_python<configuration>(self);
  try {
    h5_write(*gr_ptr, key, self_c);
  }
  CATCH_AND_RETURN("in h5 writing of object Configuration",NULL);
  Py_RETURN_NONE;
 }


//--------------------- Arithmetic implementation -----------------------------
  // IMPROVE ERROR TREATEMENT LIKE OTHER ORDINARY METHODS


//--------------------- Implementation of iterator by wrapping the C++ -----------------------------


 // the next() method of the iterator
 PyObject* Configuration__iterator__iternext__(PyObject *self) {
  auto * self_c = (Configuration__iterator *)self;
  if (self_c->iter != self_c->end) {
    PyObject *res = convert_to_python(*(self_c->iter));// make a COPY, I cannot wrap a ref in python !
    ++self_c->iter;
    return res;
  } else {
    PyErr_SetNone(PyExc_StopIteration);
    return NULL;
  }
 }

// the __iter__ of the main type: return a new iterator. Need to allocate and init it by hand (no init method).
PyObject* Configuration___iter__(PyObject *self) {
  auto & self_c = convert_from_python<configuration>(self);
  auto * p = PyObject_New(Configuration__iterator, &Configuration__iteratorType);
  if (!p) return NULL;
  p->container = self;
  Py_INCREF(self); // We keep an owned reference to the container object (e.g. [x for x in g.mesh], if the container is a temporary and the iterator lives longer than its python reference).
  // Initialize the memory of p->iter and p->end with placement new
  new (&p->iter) auto(std::begin(self_c));
  new (&p->end) auto(std::end(self_c));
  return (PyObject *)p;
}



//--------------------- define all members  -----------------------------


//--------------------- define all properties  -----------------------------


static PyObject * SomCore__get_prop_solutions (PyObject *self, void *closure) {
    auto & self_c = convert_from_python<som_core>(self);
    std::vector<configuration> result =  self_c.get_solutions(); // defines result, which cannot be void (property would return None ??)
       return convert_to_python(std::move(result));
}


static PyObject * SomCore__get_prop_objf_list (PyObject *self, void *closure) {
    auto & self_c = convert_from_python<som_core>(self);
    std::vector<double> result =  self_c.get_objf(); // defines result, which cannot be void (property would return None ??)
       return convert_to_python(std::move(result));
}


static PyObject * SomCore__get_prop_histograms (PyObject *self, void *closure) {
    auto & self_c = convert_from_python<som_core>(self);
    std::optional<std::vector<histogram>> result =  self_c.get_histograms(); // defines result, which cannot be void (property would return None ??)
       return convert_to_python(std::move(result));
}


static PyObject * SomCore__get_prop_observable_kind (PyObject *self, void *closure) {
    auto & self_c = convert_from_python<som_core>(self);
    observable_kind result =  self_c.get_observable_kind(); // defines result, which cannot be void (property would return None ??)
       return convert_to_python(std::move(result));
}


static PyObject * SomCore__get_prop_dim (PyObject *self, void *closure) {
    auto & self_c = convert_from_python<som_core>(self);
    long result =  self_c.get_dim(); // defines result, which cannot be void (property would return None ??)
       return convert_to_python(std::move(result));
}


static PyObject * SomCore__get_prop_last_accumulate_parameters (PyObject *self, void *closure) {
    auto & self_c = convert_from_python<som_core>(self);
    som::accumulate_parameters_t result =  self_c.get_last_accumulate_parameters(); // defines result, which cannot be void (property would return None ??)
       return convert_to_python(std::move(result));
}


static PyObject * SomCore__get_prop_accumulate_status (PyObject *self, void *closure) {
    auto & self_c = convert_from_python<som_core>(self);
    int result =  self_c.get_accumulate_status(); // defines result, which cannot be void (property would return None ??)
       return convert_to_python(std::move(result));
}


static PyObject * SomCore__get_prop_objf_min (PyObject *self, void *closure) {
    auto & self_c = convert_from_python<som_core>(self);
    std::vector<double> result =  self_c.get_objf_min(); // defines result, which cannot be void (property would return None ??)
       return convert_to_python(std::move(result));
}



//--------------------- [] implementation  -----------------------------


// The __getitem__impl has been implemented with other methods. We redirect the call to the general for (args, kw)
// after rebuilding args.


//--------------------- reduce : default case -----------------------------


static PyObject* SomCore___reduce__ (PyObject *self, PyObject *args, PyObject *keywds) {
  PyErr_SetString(PyExc_NotImplementedError, "__reduce__ not implemented");
  return NULL;
}

//--------------------- reduce h5 -----------------------------


//--------------------- reduce tuple -----------------------------


//--------------------- reduce repr -----------------------------


//--------------------- repr  -----------------------------


//--------------------- comparisons  -----------------------------

static PyObject* SomCore_richcompare (PyObject *a, PyObject *b, int op) {


 switch(op) {

  case Py_EQ:
   PyErr_SetString(PyExc_TypeError, "Comparison operator == not implemented for type SomCore");
   return NULL;

  case Py_NE:
   PyErr_SetString(PyExc_TypeError, "Comparison operator != not implemented for type SomCore");
   return NULL;

  case Py_LT:
   PyErr_SetString(PyExc_TypeError, "Comparison operator < not implemented for type SomCore");
   return NULL;

  case Py_GT:
   PyErr_SetString(PyExc_TypeError, "Comparison operator > not implemented for type SomCore");
   return NULL;

  case Py_LE:
   PyErr_SetString(PyExc_TypeError, "Comparison operator <= not implemented for type SomCore");
   return NULL;

  case Py_GE:
   PyErr_SetString(PyExc_TypeError, "Comparison operator >= not implemented for type SomCore");
   return NULL;

  default:
    break;
 }
 return NULL;
}

//--------------------- hdf5 part -----------------------------

/// hdf5 is not defined for this object, we still but a function + exception for a clear and early error message.
static PyObject* SomCore___write_hdf5__ (PyObject *self, PyObject *args) {
  PyErr_SetString(PyExc_NotImplementedError, "No hdf5 support for the object SomCore");
  return NULL;
 }


//--------------------- Arithmetic implementation -----------------------------
  // IMPROVE ERROR TREATEMENT LIKE OTHER ORDINARY METHODS


//--------------------- Implementation of iterator by wrapping the C++ -----------------------------




// FIXME : remove this
//--------------------- function returning the list of classes, enum wrapped  -----------------------------

 static PyObject* _get_cpp2py_wrapped_class_enums(PyObject *self, PyObject *args, PyObject *keywds) {

  PyObject * d = PyDict_New();

  static const char * cls = "[('rectangle', False), ('configuration', False), ('som_core', False)]";
  static const char * ens = "[('som::observable_kind', 'som::', ['FermionGf', 'FermionGfSymm', 'BosonCorr', 'BosonAutoCorr', 'ZeroTemp'])]";
  static const char * inclu = "['som/som_core/som_core.hpp']";

  PyDict_SetItemString(d, "classes", pyref(PyUnicode_FromString(cls)));
  PyDict_SetItemString(d, "enums", pyref(PyUnicode_FromString(ens)));
  PyDict_SetItemString(d, "module_name", pyref(PyUnicode_FromString("som.som_core")));
  PyDict_SetItemString(d, "includes", pyref(PyUnicode_FromString(inclu)));

  return d;
 }

//--------------------- module function table  -----------------------------
// the table of the function of the module...
static PyMethodDef module_methods[] = {
    {"fill_refreq", (PyCFunction)som_core_fill_refreq, METH_VARARGS| METH_KEYWORDS, "Fill a Green's function object with the real-frequency version of the continued observable from a computed SOM solution.\n\n**Parameters:**\n\n:g_w: :class:`triqs.gf.gf.Gf` defined on :class:`triqs.gf.meshes.MeshReFreq`, target Green's function object.\n:cont: :class:`Som`, Analytic continuation object.\n:with_binning: :class:`bool`, Use :ref:`binning <binning>` while projecting onto the real-frequency mesh.\n\n\n\nSignature : (triqs::gfs::gf_view<refreq> g_w, SomCore cont, bool with_binning =  true) -> None\n   Fill a Green's function object with the real-frequency version of the continued observable from a computed SOM solution.\n   \n   **Parameters:**\n   \n   :g_w: :class:`triqs.gf.gf.Gf` defined on :class:`triqs.gf.meshes.MeshReFreq`, target Green's function object.\n   :cont: :class:`Som`, Analytic continuation object.\n   :with_binning: :class:`bool`, Use :ref:`binning <binning>` while projecting onto the real-frequency mesh.\n   \nSignature : (triqs::gfs::gf_view<refreq> g_w, observable_kind kind, list[Configuration] solutions, bool with_binning =  true) -> None\n   Fill a Green's function object from a list of solutions (one solution per diagonal matrix element of the observable).\n   \n   **Parameters:**\n   \n   :g_w: :class:`triqs.gf.gf.Gf` defined on :class:`triqs.gf.meshes.MeshReFreq`, target Green's function object. Its target shape must agree with ``len(solutions)``.\n   :kind: :class:`str`, Kind of the physical observable, one of ``FermionGf``, ``FermionGfSymm``, ``BosonCorr``, ``BosonAutoCorr``, ``ZeroTemp``.\n   :solutions: :class:`list` [:class:`Configuration`], List of solutions.\n   :with_binning: :class:`bool`, Use :ref:`binning <binning>` while projecting onto the real-frequency mesh.\n   "},
    {"compute_tail", (PyCFunction)som_core_compute_tail, METH_VARARGS| METH_KEYWORDS, "Extract :ref:`high-frequency expansion coefficients <triqslibs:gf_tail>` from a computed SOM solution.\n\n**Parameters:**\n\n:max_order: :class:`int`, Maximum tail expansion order.\n:cont: :class:`Som`, Analytic continuation object.\n\n**Returns:** 3D complex NumPy array of shape ``(max_order+1, cont.dim, cont.dim)`` with the high-frequency expansion coefficients.\n\n\n\nSignature : (int max_order, SomCore cont) -> nda::array<dcomplex, 3>\n   Extract :ref:`high-frequency expansion coefficients <triqslibs:gf_tail>` from a computed SOM solution.\n   \n   **Parameters:**\n   \n   :max_order: :class:`int`, Maximum tail expansion order.\n   :cont: :class:`Som`, Analytic continuation object.\n   \n   **Returns:** 3D complex NumPy array of shape ``(max_order+1, cont.dim, cont.dim)`` with the high-frequency expansion coefficients.\n   \nSignature : (int max_order, observable_kind kind, list[Configuration] solutions) -> nda::array<dcomplex, 3>\n   Extract :ref:`high-frequency expansion coefficients <triqslibs:gf_tail>` from a list of solutions\n   (one solution per diagonal element of the observable).\n   \n   **Parameters:**\n   \n   :max_order: :class:`int`, Maximum tail expansion order.\n   :kind: :class:`str`, Kind of the physical observable, one of ``FermionGf``, ``FermionGfSymm``, ``BosonCorr``, ``BosonAutoCorr``, ``ZeroTemp``.\n   :solutions: :class:`list` [:class:`Configuration`], List of solutions.\n   \n   **Returns:** 3D complex NumPy array of shape ``(max_order+1, len(solutions), len(solutions))`` with the high-frequency expansion coefficients.\n   "},
    {"reconstruct", (PyCFunction)som_core_reconstruct, METH_VARARGS| METH_KEYWORDS, "Reconstruct a physical observable in the imaginary-time representation from a computed SOM solution.\n\n**Parameters:**\n\n:g: :class:`triqs.gf.gf.Gf` defined on :class:`triqs.gf.meshes.MeshImTime`, target Green's function object.\n:cont: :class:`Som`, Analytic continuation object.\n\n\n\nSignature : (triqs::gfs::gf_view<imtime> g, SomCore cont) -> None\n   Reconstruct a physical observable in the imaginary-time representation from a computed SOM solution.\n   \n   **Parameters:**\n   \n   :g: :class:`triqs.gf.gf.Gf` defined on :class:`triqs.gf.meshes.MeshImTime`, target Green's function object.\n   :cont: :class:`Som`, Analytic continuation object.\n   \nSignature : (triqs::gfs::gf_view<imfreq> g, SomCore cont) -> None\n   Reconstruct a physical observable in the imaginary-frequency representation from a computed SOM solution.\n   \n   **Parameters:**\n   \n   :g: :class:`triqs.gf.gf.Gf` defined on :class:`triqs.gf.meshes.MeshImFreq`, target Green's function object.\n   :cont: :class:`Som`, Analytic continuation object.\n   \nSignature : (triqs::gfs::gf_view<legendre> g, SomCore cont) -> None\n   Reconstruct an observable in the Legendre polynomial basis from a computed SOM solution.\n   \n   **Parameters:**\n   \n   :g: :class:`triqs.gf.gf.Gf` defined on :class:`triqs.gf.meshes.MeshLegendre`, target Green's function object.\n   :cont: :class:`Som`, Analytic continuation object.\n   \nSignature : (triqs::gfs::gf_view<imtime> g, observable_kind kind, list[Configuration] solutions) -> None\n   Reconstruct a physical observable in the imaginary-time representation from a list of solutions\n   (one solution per diagonal matrix element of the observable).\n   \n   **Parameters:**\n   \n   :g: :class:`triqs.gf.gf.Gf` defined on :class:`triqs.gf.meshes.MeshImTime`, target Green's function object. Its target shape must agree with ``len(solutions)``.\n   :kind: :class:`str`, Kind of the physical observable, one of ``FermionGf``, ``FermionGfSymm``, ``BosonCorr``, ``BosonAutoCorr``, ``ZeroTemp``.\n   :solutions: :class:`list` [:class:`Configuration`], List of solutions.\n   \nSignature : (triqs::gfs::gf_view<imfreq> g, observable_kind kind, list[Configuration] solutions) -> None\n   Reconstruct a physical observable in the imaginary-frequency representation from a list of solutions\n   (one solution per diagonal matrix element of the observable).\n   \n   **Parameters:**\n   \n   :g: :class:`triqs.gf.gf.Gf` defined on :class:`triqs.gf.meshes.MeshImFreq`, target Green's function object. Its target shape must agree with ``len(solutions)``.\n   :kind: :class:`str`, Kind of the physical observable, one of ``FermionGf``, ``FermionGfSymm``, ``BosonCorr``, ``BosonAutoCorr``, ``ZeroTemp``.\n   :solutions: :class:`list` [:class:`Configuration`], List of solutions.\n   \nSignature : (triqs::gfs::gf_view<legendre> g, observable_kind kind, list[Configuration] solutions) -> None\n   Reconstruct a physical observable in the Legendre polynomial basis from a list of solutions\n   (one solution per diagonal matrix element of the observable).\n   \n   **Parameters:**\n   \n   :g: :class:`triqs.gf.gf.Gf` defined on :class:`triqs.gf.meshes.MeshLegendre`, target Green's function object. Its target shape must agree with ``len(solutions)``.\n   :kind: :class:`str`, Kind of the physical observable, one of ``FermionGf``, ``FermionGfSymm``, ``BosonCorr``, ``BosonAutoCorr``, ``ZeroTemp``.\n   :solutions: :class:`list` [:class:`Configuration`], List of solutions.\n   "},

    {"_get_cpp2py_wrapped_class_enums", (PyCFunction)_get_cpp2py_wrapped_class_enums, METH_VARARGS, "[Internal] Returns the list of wrapped objects  " },
    {NULL}  /* Sentinel */
};

//--------------------- module struct & init error definition ------------

static struct PyModuleDef som_core_def =
{
    PyModuleDef_HEAD_INIT,
    "som_core", /* name of module */
    "The Stochastic Optimization Method", /* module documentation, may be NULL */
    -1,   /* size of per-interpreter state of the module, or -1 if the module keeps state in global variables. */
    module_methods
};

//--------------------- hdf5 helper function -----------------------------
#ifdef H5_INTERFACE_INCLUDED

template <typename T, typename Enable = void>
struct _regular {
  using type = T;
};
template <typename T>
struct _regular<T, std::void_t<typename T::regular_type>> {
  using type = typename T::regular_type;
};

template <typename T> std::function<PyObject *(PyObject *, std::string)> make_py_h5_reader(const char *) {

  auto reader = [](PyObject *h5_gr, std::string const &name) -> PyObject * {
    auto gr = convert_from_python<h5::group>(h5_gr);

    // If T is a view type grab the regular_t of it
    using c_type = typename _regular<T>::type;

    try { // Now call the proper h5_read
      return convert_to_python(T(h5::h5_read<c_type>(gr, name)));
    }
    CATCH_AND_RETURN("in h5 reading of object" + typeid(c_type).name(), NULL);
  };

  return {reader};
}

#endif

//--------------------- module init function -----------------------------
extern "C" __attribute__((visibility("default"))) PyObject* PyInit_som_core(void)
{

// import numpy iff 'numpy/arrayobject.h' included
#ifdef Py_ARRAYOBJECT_H
    import_array();
#endif

    PyImport_ImportModule("triqs.gf");
    PyImport_ImportModule("triqs.stat.histograms");

    PyObject* m;

    if (PyType_Ready(&RectangleType) < 0)
      return NULL;

    if (PyType_Ready(&ConfigurationType) < 0)
      return NULL;

    // initializing the Configuration__iterator
    Configuration__iteratorType.tp_new = PyType_GenericNew;
    if (PyType_Ready(&Configuration__iteratorType) < 0)
      return NULL;
    Py_INCREF(&Configuration__iteratorType);
    if (PyType_Ready(&SomCoreType) < 0)
      return NULL;


    m = PyModule_Create(&som_core_def);
    if (m == NULL)  
      return NULL;


    Py_INCREF(&RectangleType);
    PyModule_AddObject(m, "Rectangle", (PyObject *)&RectangleType);
    Py_INCREF(&ConfigurationType);
    PyModule_AddObject(m, "Configuration", (PyObject *)&ConfigurationType);
    Py_INCREF(&SomCoreType);
    PyModule_AddObject(m, "SomCore", (PyObject *)&SomCoreType);

#ifdef H5_INTERFACE_INCLUDED
    // hdf5 registration
    pyref module = pyref::module("h5.formats");
    pyref register_class = module.attr("register_class");
    {
      pyref h5_reader = convert_to_python(make_py_h5_reader<configuration>("Configuration"));
      pyref ds = convert_to_python(h5::get_hdf5_format<configuration>());
      pyref res = PyObject_CallFunctionObjArgs(register_class, (PyObject*)(&ConfigurationType), Py_None, (PyObject*)h5_reader, (PyObject*)ds, NULL);
    }
#endif

    //std::cout << " INIT Module " << "som_core" << std::endl;
    //std::cout << " table ptr count " << cpp2py::conv_table_sptr.use_count() << std::endl;
    // register all the types
    auto &conv_table  = *cpp2py::conv_table_sptr.get();
    conv_table[std::type_index(typeid(rectangle)).name()] = &RectangleType;
    conv_table[std::type_index(typeid(configuration)).name()] = &ConfigurationType;
    conv_table[std::type_index(typeid(som_core)).name()] = &SomCoreType;
    //for(auto & [k, v]: conv_table){
      //std::cout << k << "\n";
    //}

    return m;
}
