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
 * Dbv0_0_38_association_max.h
 *
 * Max settings
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_association_max_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_association_max_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/Dbv0_0_38_association_max_per.h"
#include "slurmrestapi/model/Dbv0_0_38_association_max_tres.h"
#include "slurmrestapi/model/Dbv0_0_38_association_max_jobs.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_38_association_max_jobs;
class Dbv0_0_38_association_max_per;
class Dbv0_0_38_association_max_tres;

/// <summary>
/// Max settings
/// </summary>
class  Dbv0_0_38_association_max
    : public ModelBase
{
public:
    Dbv0_0_38_association_max();
    virtual ~Dbv0_0_38_association_max();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_association_max members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_38_association_max_jobs> getJobs() const;
    bool jobsIsSet() const;
    void unsetJobs();

    void setJobs(const std::shared_ptr<Dbv0_0_38_association_max_jobs>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_38_association_max_per> getPer() const;
    bool perIsSet() const;
    void unsetPer();

    void setPer(const std::shared_ptr<Dbv0_0_38_association_max_per>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_38_association_max_tres> getTres() const;
    bool tresIsSet() const;
    void unsetTres();

    void setTres(const std::shared_ptr<Dbv0_0_38_association_max_tres>& value);


protected:
    std::shared_ptr<Dbv0_0_38_association_max_jobs> m_Jobs;
    bool m_JobsIsSet;
    std::shared_ptr<Dbv0_0_38_association_max_per> m_Per;
    bool m_PerIsSet;
    std::shared_ptr<Dbv0_0_38_association_max_tres> m_Tres;
    bool m_TresIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_association_max_H_ */
