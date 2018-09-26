// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * anytype/GenericElement.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef ANYTYPE_GENERICELEMENT_HPP
#define ANYTYPE_GENERICELEMENT_HPP

#include <anytype_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <ecore_forward.hpp>
#include <anytype/Element.hpp>

/*PROTECTED REGION ID(GenericElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace anytype
{

    class GenericElement: public virtual ::anytype::Element
    {
    public:
        GenericElement();

        virtual ~GenericElement();

        virtual void _initialize();

        // Operations

        // Attributes
        std::vector< ::ecore::EFeatureMapEntry > const& getElementFeatureMap() const;
        void setElementFeatureMap(
                std::vector< ::ecore::EFeatureMapEntry > _elementFeatureMap);

        void addElementFeatureMap(
                ::ecore::EFeatureMapEntry const& _new_element_in_elementFeatureMap);
        void setElementFeatureMapAt(size_t _position,
                ::ecore::EFeatureMapEntry const& _new_element_in_elementFeatureMap);
        void deleteElementFeatureMapAt(size_t _position);

        std::vector< ::ecore::EFeatureMapEntry > const& getAttributeFeatureMap() const;
        void setAttributeFeatureMap(
                std::vector< ::ecore::EFeatureMapEntry > _attributeFeatureMap);

        void addAttributeFeatureMap(
                ::ecore::EFeatureMapEntry const& _new_element_in_attributeFeatureMap);
        void setAttributeFeatureMapAt(size_t _position,
                ::ecore::EFeatureMapEntry const& _new_element_in_attributeFeatureMap);
        void deleteAttributeFeatureMapAt(size_t _position);

        // References
        ::ecorecpp::mapping::EList< ::anytype::GenericElement >& getNestedElements();

        ::ecorecpp::mapping::EList< ::anytype::GenericAttribute >& getAttributes();

        /*PROTECTED REGION ID(GenericElement) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        virtual ::ecore::EJavaObject eGet(::ecore::EInt _featureID,
                ::ecore::EBoolean _resolve);
        virtual void eSet(::ecore::EInt _featureID,
                ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::EBoolean eIsSet(::ecore::EInt _featureID);
        virtual void eUnset(::ecore::EInt _featureID);
        virtual ::ecore::EClass_ptr _eClass();

        /*PROTECTED REGION ID(GenericElementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        std::vector< ::ecore::EFeatureMapEntry > m_elementFeatureMap;

        std::vector< ::ecore::EFeatureMapEntry > m_attributeFeatureMap;

        // References

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::anytype::GenericElement > > m_nestedElements;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::anytype::GenericAttribute > > m_attributes;

    };

} // anytype

#endif // ANYTYPE_GENERICELEMENT_HPP

