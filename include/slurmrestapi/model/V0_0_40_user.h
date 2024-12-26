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

/*
 * V0_0_40_user.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_user_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_user_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_40_assoc_short.h"
#include "slurmrestapi/model/V0_0_40_user_default.h"
#include "slurmrestapi/model/V0_0_40_wckey.h"
#include <cpprest/details/basic_types.h>
#include "slurmrestapi/model/V0_0_40_coord.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_40_assoc_short;
class V0_0_40_coord;
class V0_0_40_user_default;
class V0_0_40_wckey;


/// <summary>
/// 
/// </summary>
class  V0_0_40_user
    : public ModelBase
{
public:
    V0_0_40_user();
    virtual ~V0_0_40_user();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_user members

    /// <summary>
    /// AdminLevel granted to the user
    /// </summary>
    std::vector<utility::string_t>& getAdministratorLevel();
    bool administratorLevelIsSet() const;
    void unsetAdministrator_level();

    void setAdministratorLevel(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_40_assoc_short>>& getAssociations();
    bool associationsIsSet() const;
    void unsetAssociations();

    void setAssociations(const std::vector<std::shared_ptr<V0_0_40_assoc_short>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_40_coord>>& getCoordinators();
    bool coordinatorsIsSet() const;
    void unsetCoordinators();

    void setCoordinators(const std::vector<std::shared_ptr<V0_0_40_coord>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_user_default> getRDefault() const;
    bool rDefaultIsSet() const;
    void unsetr_default();

    void setRDefault(const std::shared_ptr<V0_0_40_user_default>& value);

    /// <summary>
    /// Flags associated with user
    /// </summary>
    std::vector<utility::string_t>& getFlags();
    bool flagsIsSet() const;
    void unsetFlags();

    void setFlags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// User name
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Previous user name
    /// </summary>
    utility::string_t getOldName() const;
    bool oldNameIsSet() const;
    void unsetOld_name();

    void setOldName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_40_wckey>>& getWckeys();
    bool wckeysIsSet() const;
    void unsetWckeys();

    void setWckeys(const std::vector<std::shared_ptr<V0_0_40_wckey>>& value);


protected:
    std::vector<utility::string_t> m_Administrator_level;
    bool m_Administrator_levelIsSet;
    std::vector<std::shared_ptr<V0_0_40_assoc_short>> m_Associations;
    bool m_AssociationsIsSet;
    std::vector<std::shared_ptr<V0_0_40_coord>> m_Coordinators;
    bool m_CoordinatorsIsSet;
    std::shared_ptr<V0_0_40_user_default> m_r_default;
    bool m_r_defaultIsSet;
    std::vector<utility::string_t> m_Flags;
    bool m_FlagsIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Old_name;
    bool m_Old_nameIsSet;
    std::vector<std::shared_ptr<V0_0_40_wckey>> m_Wckeys;
    bool m_WckeysIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_user_H_ */
