/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/Dbv0_0_37_response_user_update.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_37_response_user_update::Dbv0_0_37_response_user_update()
{
    m_ErrorsIsSet = false;
}

Dbv0_0_37_response_user_update::~Dbv0_0_37_response_user_update()
{
}

void Dbv0_0_37_response_user_update::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_37_response_user_update::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }

    return val;
}

bool Dbv0_0_37_response_user_update::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Dbv0_0_37_error>> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    return ok;
}

void Dbv0_0_37_response_user_update::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
}

bool Dbv0_0_37_response_user_update::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::vector<std::shared_ptr<Dbv0_0_37_error>> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    return ok;
}

std::vector<std::shared_ptr<Dbv0_0_37_error>>& Dbv0_0_37_response_user_update::getErrors()
{
    return m_Errors;
}

void Dbv0_0_37_response_user_update::setErrors(const std::vector<std::shared_ptr<Dbv0_0_37_error>>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool Dbv0_0_37_response_user_update::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void Dbv0_0_37_response_user_update::unsetErrors()
{
    m_ErrorsIsSet = false;
}
}
}
}
}


