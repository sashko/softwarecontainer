/*
 * Copyright (C) 2016 Pelagicore AB
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR
 * BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES
 * OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
 * WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
 * ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
 *
 * For further information see LICENSE
 */


#pragma once
#include "gateway.h"

/**
 * @brief Environment Gateway is used to define environment variables to the container
 */
class EnvironmentGateway :
    public Gateway
{
    LOG_DECLARE_CLASS_CONTEXT("Env", "Environment gateway");

public:
    static constexpr const char *ID = "env";

    EnvironmentGateway();
    ~EnvironmentGateway();
    ReturnCode readConfigElement(const json_t *element);
    bool activateGateway();
    bool teardownGateway();

private:
    EnvironmentVariables m_variables;
};