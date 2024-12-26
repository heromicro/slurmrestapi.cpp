/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_40_openapi_meta_plugin.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_40_openapi_meta_plugin::V0_0_40_openapi_meta_plugin()
{
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Data_parser = utility::conversions::to_string_t("");
    m_Data_parserIsSet = false;
    m_Accounting_storage = utility::conversions::to_string_t("");
    m_Accounting_storageIsSet = false;
}

V0_0_40_openapi_meta_plugin::~V0_0_40_openapi_meta_plugin()
{
}

void V0_0_40_openapi_meta_plugin::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_openapi_meta_plugin::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_Data_parserIsSet)
    {
        val[utility::conversions::to_string_t(U("data_parser"))] = ModelBase::toJson(m_Data_parser);
    }
    if(m_Accounting_storageIsSet)
    {
        val[utility::conversions::to_string_t(U("accounting_storage"))] = ModelBase::toJson(m_Accounting_storage);
    }

    return val;
}

bool V0_0_40_openapi_meta_plugin::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("data_parser"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("data_parser")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDataParser;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDataParser);
            setDataParser(refVal_setDataParser);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("accounting_storage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accounting_storage")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAccountingStorage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccountingStorage);
            setAccountingStorage(refVal_setAccountingStorage);
        }
    }
    return ok;
}

void V0_0_40_openapi_meta_plugin::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_Data_parserIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("data_parser")), m_Data_parser));
    }
    if(m_Accounting_storageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accounting_storage")), m_Accounting_storage));
    }
}

bool V0_0_40_openapi_meta_plugin::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("data_parser"))))
    {
        utility::string_t refVal_setDataParser;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("data_parser"))), refVal_setDataParser );
        setDataParser(refVal_setDataParser);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accounting_storage"))))
    {
        utility::string_t refVal_setAccountingStorage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accounting_storage"))), refVal_setAccountingStorage );
        setAccountingStorage(refVal_setAccountingStorage);
    }
    return ok;
}

utility::string_t V0_0_40_openapi_meta_plugin::getType() const
{
    return m_Type;
}

void V0_0_40_openapi_meta_plugin::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool V0_0_40_openapi_meta_plugin::typeIsSet() const
{
    return m_TypeIsSet;
}

void V0_0_40_openapi_meta_plugin::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t V0_0_40_openapi_meta_plugin::getName() const
{
    return m_Name;
}

void V0_0_40_openapi_meta_plugin::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool V0_0_40_openapi_meta_plugin::nameIsSet() const
{
    return m_NameIsSet;
}

void V0_0_40_openapi_meta_plugin::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t V0_0_40_openapi_meta_plugin::getDataParser() const
{
    return m_Data_parser;
}

void V0_0_40_openapi_meta_plugin::setDataParser(const utility::string_t& value)
{
    m_Data_parser = value;
    m_Data_parserIsSet = true;
}

bool V0_0_40_openapi_meta_plugin::dataParserIsSet() const
{
    return m_Data_parserIsSet;
}

void V0_0_40_openapi_meta_plugin::unsetData_parser()
{
    m_Data_parserIsSet = false;
}
utility::string_t V0_0_40_openapi_meta_plugin::getAccountingStorage() const
{
    return m_Accounting_storage;
}

void V0_0_40_openapi_meta_plugin::setAccountingStorage(const utility::string_t& value)
{
    m_Accounting_storage = value;
    m_Accounting_storageIsSet = true;
}

bool V0_0_40_openapi_meta_plugin::accountingStorageIsSet() const
{
    return m_Accounting_storageIsSet;
}

void V0_0_40_openapi_meta_plugin::unsetAccounting_storage()
{
    m_Accounting_storageIsSet = false;
}
}
}
}
}


