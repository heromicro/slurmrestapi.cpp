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

/*
 * Dbv0_0_37_association_max_tres_minutes_per.h
 *
 * Max TRES minutes per settings
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_association_max_tres_minutes_per_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_association_max_tres_minutes_per_H_


#include "slurmrestapi/ModelBase.h"

#include <vector>
#include "slurmrestapi/model/Dbv0_0_37_tres_list_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_37_tres_list_inner;

/// <summary>
/// Max TRES minutes per settings
/// </summary>
class  Dbv0_0_37_association_max_tres_minutes_per
    : public ModelBase
{
public:
    Dbv0_0_37_association_max_tres_minutes_per();
    virtual ~Dbv0_0_37_association_max_tres_minutes_per();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_37_association_max_tres_minutes_per members

    /// <summary>
    /// TRES list of attributes
    /// </summary>
    std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>>& getJob();
    bool jobIsSet() const;
    void unsetJob();

    void setJob(const std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>>& value);


protected:
    std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>> m_Job;
    bool m_JobIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_association_max_tres_minutes_per_H_ */
