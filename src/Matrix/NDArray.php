<?php
namespace Interop\Polite\Math\Matrix;

use ArrayAccess;

interface NDArray extends ArrayAccess
{
    const bool  = 1;
    const int8  = 2;
    const int16 = 3;
    const int32 = 4;
    const int64 = 5;
    const uint8 = 6;
    const uint16 = 7;
    const uint32 = 8;
    const uint64 = 9;
    const float8 = 10;
    const float16 = 11;
    const float32 = 12;
    const float64 = 13;

    public function shape() : array;

    public function ndim() : int;

    public function dtype();

    public function buffer() : ArrayAccess;

    public function offset() : int;

    public function size() : int;

    public function reshape(array $shape) : NDArray;

    public function toArray() : array;
}
