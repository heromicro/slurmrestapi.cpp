/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/Dbv0_0_38_response_associations.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_38_response_associations::Dbv0_0_38_response_associations()
{
    m_MetaIsSet = false;
    m_ErrorsIsSet = false;
}

Dbv0_0_38_response_associations::~Dbv0_0_38_response_associations()
{
}

void Dbv0_0_38_response_associations::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_38_response_associations::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MetaIsSet)
    {
        val[utility::conversions::to_string_t(U("meta"))] = ModelBase::toJson(m_Meta);
    }
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }

    return val;
}

bool Dbv0_0_38_response_associations::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("meta"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("meta")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Dbv0_0_38_meta> refVal_setMeta;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMeta);
            setMeta(refVal_setMeta);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Dbv0_0_38_error>> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    return ok;
}

void Dbv0_0_38_response_associations::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MetaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("meta")), m_Meta));
    }
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
}

bool Dbv0_0_38_response_associations::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("meta"))))
    {
        std::shared_ptr<Dbv0_0_38_meta> refVal_setMeta;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("meta"))), refVal_setMeta );
        setMeta(refVal_setMeta);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::vector<std::shared_ptr<Dbv0_0_38_error>> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    return ok;
}

std::shared_ptr<Dbv0_0_38_meta> Dbv0_0_38_response_associations::getMeta() const
{
    return m_Meta;
}

void Dbv0_0_38_response_associations::setMeta(const std::shared_ptr<Dbv0_0_38_meta>& value)
{
    m_Meta = value;
    m_MetaIsSet = true;
}

bool Dbv0_0_38_response_associations::metaIsSet() const
{
    return m_MetaIsSet;
}

void Dbv0_0_38_response_associations::unsetMeta()
{
    m_MetaIsSet = false;
}
std::vector<std::shared_ptr<Dbv0_0_38_error>>& Dbv0_0_38_response_associations::getErrors()
{
    return m_Errors;
}

void Dbv0_0_38_response_associations::setErrors(const std::vector<std::shared_ptr<Dbv0_0_38_error>>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool Dbv0_0_38_response_associations::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void Dbv0_0_38_response_associations::unsetErrors()
{
    m_ErrorsIsSet = false;
}
}
}
}
}


