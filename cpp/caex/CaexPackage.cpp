// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/CaexPackage.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <caex/CaexPackage.hpp>

using namespace ::caex;

std::auto_ptr< ::caex::CaexPackage > CaexPackage::s_instance;

::caex::CaexPackage_ptr CaexPackage::_instance()
{
    if (!s_instance.get())
        new CaexPackage();
    return s_instance.get();
}

