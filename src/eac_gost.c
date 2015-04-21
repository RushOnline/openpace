/*
 * Copyright (c) 2010-2012 Frank Morgner and Dominik Oepen
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
 * @file eac_ecdh.c
 * @brief Elliptic curve Diffie Hellman helper functions
 *
 * @author Frank Morgner <morgner@informatik.hu-berlin.de>
 * @author Dominik Oepen <oepen@informatik.hu-berlin.de>
 */

#include "eac_gost.h"
#include "eac_err.h"
#include "misc.h"
#include <eac/pace.h>
#include <openssl/ecdh.h>
#include <openssl/evp.h>
#include <openssl/objects.h>

int
init_gost(EC_KEY ** ecdh, int standardizedDomainParameters)
{
	return 0;
}

BUF_MEM *
gost_generate_key(EVP_PKEY *key, BN_CTX *bn_ctx)
{
    return NULL;
}

BUF_MEM *
gost_compute_key(EVP_PKEY *key, const BUF_MEM * in, BN_CTX *bn_ctx)
{
    return NULL;
}
