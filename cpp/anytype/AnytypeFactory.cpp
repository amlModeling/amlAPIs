// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * anytype/AnytypeFactory.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <anytype/AnytypeFactory.hpp>

using namespace ::anytype;

std::auto_ptr< ::anytype::AnytypeFactory > AnytypeFactory::s_instance;

::anytype::AnytypeFactory_ptr AnytypeFactory::_instance()
{
    if (!s_instance.get())
        new AnytypeFactory();
    return s_instance.get();
}

