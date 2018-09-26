// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * anytype/AnytypePackage.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <anytype/AnytypePackage.hpp>

using namespace ::anytype;

std::auto_ptr< ::anytype::AnytypePackage > AnytypePackage::s_instance;

::anytype::AnytypePackage_ptr AnytypePackage::_instance()
{
    if (!s_instance.get())
        new AnytypePackage();
    return s_instance.get();
}

