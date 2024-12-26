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



#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_users_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_slurmdbd_config_resp_users_inner::V0_0_41_openapi_slurmdbd_config_resp_users_inner()
{
    m_Administrator_levelIsSet = false;
    m_AssociationsIsSet = false;
    m_CoordinatorsIsSet = false;
    m_r_defaultIsSet = false;
    m_FlagsIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Old_name = utility::conversions::to_string_t("");
    m_Old_nameIsSet = false;
    m_WckeysIsSet = false;
}

V0_0_41_openapi_slurmdbd_config_resp_users_inner::~V0_0_41_openapi_slurmdbd_config_resp_users_inner()
{
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_slurmdbd_config_resp_users_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Administrator_levelIsSet)
    {
        val[utility::conversions::to_string_t(U("administrator_level"))] = ModelBase::toJson(m_Administrator_level);
    }
    if(m_AssociationsIsSet)
    {
        val[utility::conversions::to_string_t(U("associations"))] = ModelBase::toJson(m_Associations);
    }
    if(m_CoordinatorsIsSet)
    {
        val[utility::conversions::to_string_t(U("coordinators"))] = ModelBase::toJson(m_Coordinators);
    }
    if(m_r_defaultIsSet)
    {
        val[utility::conversions::to_string_t(U("default"))] = ModelBase::toJson(m_r_default);
    }
    if(m_FlagsIsSet)
    {
        val[utility::conversions::to_string_t(U("flags"))] = ModelBase::toJson(m_Flags);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_Old_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("old_name"))] = ModelBase::toJson(m_Old_name);
    }
    if(m_WckeysIsSet)
    {
        val[utility::conversions::to_string_t(U("wckeys"))] = ModelBase::toJson(m_Wckeys);
    }

    return val;
}

bool V0_0_41_openapi_slurmdbd_config_resp_users_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("administrator_level"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("administrator_level")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setAdministratorLevel;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAdministratorLevel);
            setAdministratorLevel(refVal_setAdministratorLevel);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("associations"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("associations")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner>> refVal_setAssociations;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAssociations);
            setAssociations(refVal_setAssociations);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("coordinators"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("coordinators")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_coordinators_inner>> refVal_setCoordinators;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCoordinators);
            setCoordinators(refVal_setCoordinators);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("default"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("default")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_user_default> refVal_setRDefault;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRDefault);
            setRDefault(refVal_setRDefault);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("flags"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("flags")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setFlags;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFlags);
            setFlags(refVal_setFlags);
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
    if(val.has_field(utility::conversions::to_string_t(U("old_name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("old_name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOldName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOldName);
            setOldName(refVal_setOldName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("wckeys"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wckeys")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner>> refVal_setWckeys;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWckeys);
            setWckeys(refVal_setWckeys);
        }
    }
    return ok;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Administrator_levelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("administrator_level")), m_Administrator_level));
    }
    if(m_AssociationsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("associations")), m_Associations));
    }
    if(m_CoordinatorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("coordinators")), m_Coordinators));
    }
    if(m_r_defaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("default")), m_r_default));
    }
    if(m_FlagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("flags")), m_Flags));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_Old_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("old_name")), m_Old_name));
    }
    if(m_WckeysIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wckeys")), m_Wckeys));
    }
}

bool V0_0_41_openapi_slurmdbd_config_resp_users_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("administrator_level"))))
    {
        std::vector<utility::string_t> refVal_setAdministratorLevel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("administrator_level"))), refVal_setAdministratorLevel );
        setAdministratorLevel(refVal_setAdministratorLevel);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("associations"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner>> refVal_setAssociations;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("associations"))), refVal_setAssociations );
        setAssociations(refVal_setAssociations);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("coordinators"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_coordinators_inner>> refVal_setCoordinators;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("coordinators"))), refVal_setCoordinators );
        setCoordinators(refVal_setCoordinators);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("default"))))
    {
        std::shared_ptr<V0_0_40_user_default> refVal_setRDefault;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("default"))), refVal_setRDefault );
        setRDefault(refVal_setRDefault);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("flags"))))
    {
        std::vector<utility::string_t> refVal_setFlags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("flags"))), refVal_setFlags );
        setFlags(refVal_setFlags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("old_name"))))
    {
        utility::string_t refVal_setOldName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("old_name"))), refVal_setOldName );
        setOldName(refVal_setOldName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("wckeys"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner>> refVal_setWckeys;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wckeys"))), refVal_setWckeys );
        setWckeys(refVal_setWckeys);
    }
    return ok;
}

std::vector<utility::string_t>& V0_0_41_openapi_slurmdbd_config_resp_users_inner::getAdministratorLevel()
{
    return m_Administrator_level;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::setAdministratorLevel(const std::vector<utility::string_t>& value)
{
    m_Administrator_level = value;
    m_Administrator_levelIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_users_inner::administratorLevelIsSet() const
{
    return m_Administrator_levelIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::unsetAdministrator_level()
{
    m_Administrator_levelIsSet = false;
}
std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner>>& V0_0_41_openapi_slurmdbd_config_resp_users_inner::getAssociations()
{
    return m_Associations;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::setAssociations(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner>>& value)
{
    m_Associations = value;
    m_AssociationsIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_users_inner::associationsIsSet() const
{
    return m_AssociationsIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::unsetAssociations()
{
    m_AssociationsIsSet = false;
}
std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_coordinators_inner>>& V0_0_41_openapi_slurmdbd_config_resp_users_inner::getCoordinators()
{
    return m_Coordinators;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::setCoordinators(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_coordinators_inner>>& value)
{
    m_Coordinators = value;
    m_CoordinatorsIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_users_inner::coordinatorsIsSet() const
{
    return m_CoordinatorsIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::unsetCoordinators()
{
    m_CoordinatorsIsSet = false;
}
std::shared_ptr<V0_0_40_user_default> V0_0_41_openapi_slurmdbd_config_resp_users_inner::getRDefault() const
{
    return m_r_default;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::setRDefault(const std::shared_ptr<V0_0_40_user_default>& value)
{
    m_r_default = value;
    m_r_defaultIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_users_inner::rDefaultIsSet() const
{
    return m_r_defaultIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::unsetr_default()
{
    m_r_defaultIsSet = false;
}
std::vector<utility::string_t>& V0_0_41_openapi_slurmdbd_config_resp_users_inner::getFlags()
{
    return m_Flags;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::setFlags(const std::vector<utility::string_t>& value)
{
    m_Flags = value;
    m_FlagsIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_users_inner::flagsIsSet() const
{
    return m_FlagsIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::unsetFlags()
{
    m_FlagsIsSet = false;
}
utility::string_t V0_0_41_openapi_slurmdbd_config_resp_users_inner::getName() const
{
    return m_Name;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_users_inner::nameIsSet() const
{
    return m_NameIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t V0_0_41_openapi_slurmdbd_config_resp_users_inner::getOldName() const
{
    return m_Old_name;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::setOldName(const utility::string_t& value)
{
    m_Old_name = value;
    m_Old_nameIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_users_inner::oldNameIsSet() const
{
    return m_Old_nameIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::unsetOld_name()
{
    m_Old_nameIsSet = false;
}
std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner>>& V0_0_41_openapi_slurmdbd_config_resp_users_inner::getWckeys()
{
    return m_Wckeys;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::setWckeys(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner>>& value)
{
    m_Wckeys = value;
    m_WckeysIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_users_inner::wckeysIsSet() const
{
    return m_WckeysIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_users_inner::unsetWckeys()
{
    m_WckeysIsSet = false;
}
}
}
}
}


