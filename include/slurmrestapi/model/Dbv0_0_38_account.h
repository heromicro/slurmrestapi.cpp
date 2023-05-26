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

/*
 * Dbv0_0_38_account.h
 *
 * Account description
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_account_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_account_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/Dbv0_0_38_coordinator_info.h"
#include <cpprest/details/basic_types.h>
#include "slurmrestapi/model/Dbv0_0_38_association_short_info.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_38_association_short_info;
class Dbv0_0_38_coordinator_info;

/// <summary>
/// Account description
/// </summary>
class  Dbv0_0_38_account
    : public ModelBase
{
public:
    Dbv0_0_38_account();
    virtual ~Dbv0_0_38_account();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_account members

    /// <summary>
    /// List of assigned associations
    /// </summary>
    std::vector<std::shared_ptr<Dbv0_0_38_association_short_info>>& getAssociations();
    bool associationsIsSet() const;
    void unsetAssociations();

    void setAssociations(const std::vector<std::shared_ptr<Dbv0_0_38_association_short_info>>& value);

    /// <summary>
    /// List of assigned coordinators
    /// </summary>
    std::vector<std::shared_ptr<Dbv0_0_38_coordinator_info>>& getCoordinators();
    bool coordinatorsIsSet() const;
    void unsetCoordinators();

    void setCoordinators(const std::vector<std::shared_ptr<Dbv0_0_38_coordinator_info>>& value);

    /// <summary>
    /// Description of account
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// Name of account
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Assigned organization of account
    /// </summary>
    utility::string_t getOrganization() const;
    bool organizationIsSet() const;
    void unsetOrganization();

    void setOrganization(const utility::string_t& value);

    /// <summary>
    /// List of properties of account
    /// </summary>
    std::vector<utility::string_t>& getFlags();
    bool flagsIsSet() const;
    void unsetFlags();

    void setFlags(const std::vector<utility::string_t>& value);


protected:
    std::vector<std::shared_ptr<Dbv0_0_38_association_short_info>> m_Associations;
    bool m_AssociationsIsSet;
    std::vector<std::shared_ptr<Dbv0_0_38_coordinator_info>> m_Coordinators;
    bool m_CoordinatorsIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Organization;
    bool m_OrganizationIsSet;
    std::vector<utility::string_t> m_Flags;
    bool m_FlagsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_account_H_ */