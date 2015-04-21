/*
 * Copyright (c) 2010-2012 Frank Morgner and Dominik Oepen
 * Copyright (c) 2015 Evgeniy Nepomniashchiy
 *
 * This file is part of OpenPACE.
 *
 * OpenPACE is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * OpenPACE is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * OpenPACE.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file eac_gost.h
 * @brief Interface to GOST helper functions
 *
 * @author Frank Morgner <morgner@informatik.hu-berlin.de>
 * @author Dominik Oepen <oepen@informatik.hu-berlin.de>
 * @author Evgeniy Nepomniashchiy <rush.zlo@gmail.com>
 */

#ifndef PACE_GOST_H_
#define PACE_GOST_H_

#include <openssl/bn.h>
#include <openssl/buffer.h>
#include <openssl/ec.h>
#include <openssl/evp.h>
/**
 * @brief initializes a key for GOST. If the object is already initialised,
 * nothing is don
 *
 * @param[in/out] ecdh elliptic curve object to use
 * @param[in] standardizedDomainParameters specifies which parameters to use
 * (see TR-03110, p. 52)
 *
 * @return 1 on success or 0 if an error occurred
 */
int
init_gost(EC_KEY ** ecdh, int standardizedDomainParameters);
/**
 * @brief Generates an GOST keypair
 *
 * @param[in] key
 * @param[in] bn_ctx BIGNUM context
 *
 * @return public key of the generated keypair or NULL if an error occurred
 */
BUF_MEM *
gost_generate_key(EVP_PKEY *key, BN_CTX *bn_ctx);
/**
 * @brief Computes an GOST key
 *
 * @see PACE_STEP3B_dh_compute_key()
 */
BUF_MEM *
gost_compute_key(EVP_PKEY *key, const BUF_MEM * in, BN_CTX *bn_ctx);

#endif /*PACE_GOST_H_*/
