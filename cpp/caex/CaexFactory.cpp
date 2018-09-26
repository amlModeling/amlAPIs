// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/CaexFactory.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <caex/CaexFactory.hpp>

using namespace ::caex;

std::auto_ptr< ::caex::CaexFactory > CaexFactory::s_instance;

::caex::CaexFactory_ptr CaexFactory::_instance()
{
    if (!s_instance.get())
        new CaexFactory();
    return s_instance.get();
}

