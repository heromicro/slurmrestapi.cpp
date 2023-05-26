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



#include "slurmrestapi/model/Dbv0_0_37_account_info.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_37_account_info::Dbv0_0_37_account_info()
{
    m_ErrorsIsSet = false;
    m_AccountsIsSet = false;
}

Dbv0_0_37_account_info::~Dbv0_0_37_account_info()
{
}

void Dbv0_0_37_account_info::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_37_account_info::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }
    if(m_AccountsIsSet)
    {
        val[utility::conversions::to_string_t(U("accounts"))] = ModelBase::toJson(m_Accounts);
    }

    return val;
}

bool Dbv0_0_37_account_info::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("accounts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accounts")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Dbv0_0_37_account>> refVal_setAccounts;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccounts);
            setAccounts(refVal_setAccounts);
        }
    }
    return ok;
}

void Dbv0_0_37_account_info::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_AccountsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accounts")), m_Accounts));
    }
}

bool Dbv0_0_37_account_info::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("accounts"))))
    {
        std::vector<std::shared_ptr<Dbv0_0_37_account>> refVal_setAccounts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accounts"))), refVal_setAccounts );
        setAccounts(refVal_setAccounts);
    }
    return ok;
}

std::vector<std::shared_ptr<Dbv0_0_37_error>>& Dbv0_0_37_account_info::getErrors()
{
    return m_Errors;
}

void Dbv0_0_37_account_info::setErrors(const std::vector<std::shared_ptr<Dbv0_0_37_error>>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool Dbv0_0_37_account_info::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void Dbv0_0_37_account_info::unsetErrors()
{
    m_ErrorsIsSet = false;
}
std::vector<std::shared_ptr<Dbv0_0_37_account>>& Dbv0_0_37_account_info::getAccounts()
{
    return m_Accounts;
}

void Dbv0_0_37_account_info::setAccounts(const std::vector<std::shared_ptr<Dbv0_0_37_account>>& value)
{
    m_Accounts = value;
    m_AccountsIsSet = true;
}

bool Dbv0_0_37_account_info::accountsIsSet() const
{
    return m_AccountsIsSet;
}

void Dbv0_0_37_account_info::unsetAccounts()
{
    m_AccountsIsSet = false;
}
}
}
}
}


