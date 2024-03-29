#ifndef PHP_INTEROP_POLITE_MATH_MATRIX_H
# define PHP_INTEROP_POLITE_MATH_MATRIX_H

#define PHP_INTEROP_POLITE_MATH_MATRIX_LINEAR_BUFFER_CLASSNAME "Interop\\Polite\\Math\\Matrix\\LinearBuffer"
#define PHP_INTEROP_POLITE_MATH_MATRIX_LINEAR_BUFFER_SIGNATURE 0x66426e4c706f7249 // "IropLnBf"

typedef struct {
    zend_long signature;
    zend_long size;
    zend_long dtype;
    zend_long value_size;
    void* data;
    zend_object std;
} php_interop_polite_math_matrix_linear_buffer_t;
static inline php_interop_polite_math_matrix_linear_buffer_t* php_interop_polite_math_matrix_linear_buffer_fetch_object(zend_object* obj)
{
	return (php_interop_polite_math_matrix_linear_buffer_t*) ((char*) obj - XtOffsetOf(php_interop_polite_math_matrix_linear_buffer_t, std));
}
#define Z_INTEROP_POLITE_MATH_MATRIX_LINEAR_BUFFER_OBJ_P(zv) (php_interop_polite_math_matrix_linear_buffer_fetch_object(Z_OBJ_P(zv)))
static inline int php_interop_polite_math_matrix_is_linear_buffer(php_interop_polite_math_matrix_linear_buffer_t* linear_buffer)
{
    if(linear_buffer->signature==PHP_INTEROP_POLITE_MATH_MATRIX_LINEAR_BUFFER_SIGNATURE)
        return 1;
    else
        return 0;
}

enum php_interop_polite_math_matrix_dtype {
    php_interop_polite_math_matrix_dtype_unknown = 0,
    php_interop_polite_math_matrix_dtype_bool    = 1,
    php_interop_polite_math_matrix_dtype_int8    = 2,
    php_interop_polite_math_matrix_dtype_int16   = 3,
    php_interop_polite_math_matrix_dtype_int32   = 4,
    php_interop_polite_math_matrix_dtype_int64   = 5,
    php_interop_polite_math_matrix_dtype_uint8   = 6,
    php_interop_polite_math_matrix_dtype_uint16  = 7,
    php_interop_polite_math_matrix_dtype_uint32  = 8,
    php_interop_polite_math_matrix_dtype_uint64  = 9,
    php_interop_polite_math_matrix_dtype_float8  = 10,
    php_interop_polite_math_matrix_dtype_float16 = 11,
    php_interop_polite_math_matrix_dtype_float32 = 12,
    php_interop_polite_math_matrix_dtype_float64 = 13,
    php_interop_polite_math_matrix_dtype_complex16  = 14,
    php_interop_polite_math_matrix_dtype_complex32 = 15,
    php_interop_polite_math_matrix_dtype_complex64 = 16,
    php_interop_polite_math_matrix_dtype_complex128 = 17,
};

#endif	/* PHP_INTEROP_POLITE_MATH_MATRIX_H */
