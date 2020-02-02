<?php
namespace Interop\Polite\Math\Matrix;

/**
 *
 */
interface BLAS
{
    // Order
    const RowMajor    = 101;
    const ColMajor    = 102;
    // Transpose
    const NoTrans     = 111;
    const Trans       = 112;
    const ConjTrans   = 113;
    const ConjNoTrans = 114;
    // Uplo
    const Upper       = 121;
    const Lower       = 122;
    // Diag
    const NonUnit     = 131;
    const Unit        = 132;
    // Side
    const Left        = 141;
    const Right       = 142;
}
