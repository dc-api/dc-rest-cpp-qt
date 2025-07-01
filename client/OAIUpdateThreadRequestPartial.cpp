/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIUpdateThreadRequestPartial.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIUpdateThreadRequestPartial::OAIUpdateThreadRequestPartial(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUpdateThreadRequestPartial::OAIUpdateThreadRequestPartial() {
    this->initializeModel();
}

OAIUpdateThreadRequestPartial::~OAIUpdateThreadRequestPartial() {}

void OAIUpdateThreadRequestPartial::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_archived_isSet = false;
    m_archived_isValid = false;

    m_locked_isSet = false;
    m_locked_isValid = false;

    m_invitable_isSet = false;
    m_invitable_isValid = false;

    m_auto_archive_duration_isSet = false;
    m_auto_archive_duration_isValid = false;

    m_rate_limit_per_user_isSet = false;
    m_rate_limit_per_user_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_applied_tags_isSet = false;
    m_applied_tags_isValid = false;

    m_bitrate_isSet = false;
    m_bitrate_isValid = false;

    m_user_limit_isSet = false;
    m_user_limit_isValid = false;

    m_rtc_region_isSet = false;
    m_rtc_region_isValid = false;

    m_video_quality_mode_isSet = false;
    m_video_quality_mode_isValid = false;
}

void OAIUpdateThreadRequestPartial::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUpdateThreadRequestPartial::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_archived_isValid = ::dc_rest::fromJsonValue(m_archived, json[QString("archived")]);
    m_archived_isSet = !json[QString("archived")].isNull() && m_archived_isValid;

    m_locked_isValid = ::dc_rest::fromJsonValue(m_locked, json[QString("locked")]);
    m_locked_isSet = !json[QString("locked")].isNull() && m_locked_isValid;

    m_invitable_isValid = ::dc_rest::fromJsonValue(m_invitable, json[QString("invitable")]);
    m_invitable_isSet = !json[QString("invitable")].isNull() && m_invitable_isValid;

    m_auto_archive_duration_isValid = ::dc_rest::fromJsonValue(m_auto_archive_duration, json[QString("auto_archive_duration")]);
    m_auto_archive_duration_isSet = !json[QString("auto_archive_duration")].isNull() && m_auto_archive_duration_isValid;

    m_rate_limit_per_user_isValid = ::dc_rest::fromJsonValue(m_rate_limit_per_user, json[QString("rate_limit_per_user")]);
    m_rate_limit_per_user_isSet = !json[QString("rate_limit_per_user")].isNull() && m_rate_limit_per_user_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_applied_tags_isValid = ::dc_rest::fromJsonValue(m_applied_tags, json[QString("applied_tags")]);
    m_applied_tags_isSet = !json[QString("applied_tags")].isNull() && m_applied_tags_isValid;

    m_bitrate_isValid = ::dc_rest::fromJsonValue(m_bitrate, json[QString("bitrate")]);
    m_bitrate_isSet = !json[QString("bitrate")].isNull() && m_bitrate_isValid;

    m_user_limit_isValid = ::dc_rest::fromJsonValue(m_user_limit, json[QString("user_limit")]);
    m_user_limit_isSet = !json[QString("user_limit")].isNull() && m_user_limit_isValid;

    m_rtc_region_isValid = ::dc_rest::fromJsonValue(m_rtc_region, json[QString("rtc_region")]);
    m_rtc_region_isSet = !json[QString("rtc_region")].isNull() && m_rtc_region_isValid;

    m_video_quality_mode_isValid = ::dc_rest::fromJsonValue(m_video_quality_mode, json[QString("video_quality_mode")]);
    m_video_quality_mode_isSet = !json[QString("video_quality_mode")].isNull() && m_video_quality_mode_isValid;
}

QString OAIUpdateThreadRequestPartial::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUpdateThreadRequestPartial::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_archived_isSet) {
        obj.insert(QString("archived"), ::dc_rest::toJsonValue(m_archived));
    }
    if (m_locked_isSet) {
        obj.insert(QString("locked"), ::dc_rest::toJsonValue(m_locked));
    }
    if (m_invitable_isSet) {
        obj.insert(QString("invitable"), ::dc_rest::toJsonValue(m_invitable));
    }
    if (m_auto_archive_duration_isSet) {
        obj.insert(QString("auto_archive_duration"), ::dc_rest::toJsonValue(m_auto_archive_duration));
    }
    if (m_rate_limit_per_user_isSet) {
        obj.insert(QString("rate_limit_per_user"), ::dc_rest::toJsonValue(m_rate_limit_per_user));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    if (m_applied_tags.size() > 0) {
        obj.insert(QString("applied_tags"), ::dc_rest::toJsonValue(m_applied_tags));
    }
    if (m_bitrate_isSet) {
        obj.insert(QString("bitrate"), ::dc_rest::toJsonValue(m_bitrate));
    }
    if (m_user_limit_isSet) {
        obj.insert(QString("user_limit"), ::dc_rest::toJsonValue(m_user_limit));
    }
    if (m_rtc_region_isSet) {
        obj.insert(QString("rtc_region"), ::dc_rest::toJsonValue(m_rtc_region));
    }
    if (m_video_quality_mode_isSet) {
        obj.insert(QString("video_quality_mode"), ::dc_rest::toJsonValue(m_video_quality_mode));
    }
    return obj;
}

QString OAIUpdateThreadRequestPartial::getName() const {
    return m_name;
}
void OAIUpdateThreadRequestPartial::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIUpdateThreadRequestPartial::is_name_Set() const{
    return m_name_isSet;
}

bool OAIUpdateThreadRequestPartial::is_name_Valid() const{
    return m_name_isValid;
}

bool OAIUpdateThreadRequestPartial::isArchived() const {
    return m_archived;
}
void OAIUpdateThreadRequestPartial::setArchived(const bool &archived) {
    m_archived = archived;
    m_archived_isSet = true;
}

bool OAIUpdateThreadRequestPartial::is_archived_Set() const{
    return m_archived_isSet;
}

bool OAIUpdateThreadRequestPartial::is_archived_Valid() const{
    return m_archived_isValid;
}

bool OAIUpdateThreadRequestPartial::isLocked() const {
    return m_locked;
}
void OAIUpdateThreadRequestPartial::setLocked(const bool &locked) {
    m_locked = locked;
    m_locked_isSet = true;
}

bool OAIUpdateThreadRequestPartial::is_locked_Set() const{
    return m_locked_isSet;
}

bool OAIUpdateThreadRequestPartial::is_locked_Valid() const{
    return m_locked_isValid;
}

bool OAIUpdateThreadRequestPartial::isInvitable() const {
    return m_invitable;
}
void OAIUpdateThreadRequestPartial::setInvitable(const bool &invitable) {
    m_invitable = invitable;
    m_invitable_isSet = true;
}

bool OAIUpdateThreadRequestPartial::is_invitable_Set() const{
    return m_invitable_isSet;
}

bool OAIUpdateThreadRequestPartial::is_invitable_Valid() const{
    return m_invitable_isValid;
}

qint32 OAIUpdateThreadRequestPartial::getAutoArchiveDuration() const {
    return m_auto_archive_duration;
}
void OAIUpdateThreadRequestPartial::setAutoArchiveDuration(const qint32 &auto_archive_duration) {
    m_auto_archive_duration = auto_archive_duration;
    m_auto_archive_duration_isSet = true;
}

bool OAIUpdateThreadRequestPartial::is_auto_archive_duration_Set() const{
    return m_auto_archive_duration_isSet;
}

bool OAIUpdateThreadRequestPartial::is_auto_archive_duration_Valid() const{
    return m_auto_archive_duration_isValid;
}

qint32 OAIUpdateThreadRequestPartial::getRateLimitPerUser() const {
    return m_rate_limit_per_user;
}
void OAIUpdateThreadRequestPartial::setRateLimitPerUser(const qint32 &rate_limit_per_user) {
    m_rate_limit_per_user = rate_limit_per_user;
    m_rate_limit_per_user_isSet = true;
}

bool OAIUpdateThreadRequestPartial::is_rate_limit_per_user_Set() const{
    return m_rate_limit_per_user_isSet;
}

bool OAIUpdateThreadRequestPartial::is_rate_limit_per_user_Valid() const{
    return m_rate_limit_per_user_isValid;
}

qint32 OAIUpdateThreadRequestPartial::getFlags() const {
    return m_flags;
}
void OAIUpdateThreadRequestPartial::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIUpdateThreadRequestPartial::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIUpdateThreadRequestPartial::is_flags_Valid() const{
    return m_flags_isValid;
}

QList<QString> OAIUpdateThreadRequestPartial::getAppliedTags() const {
    return m_applied_tags;
}
void OAIUpdateThreadRequestPartial::setAppliedTags(const QList<QString> &applied_tags) {
    m_applied_tags = applied_tags;
    m_applied_tags_isSet = true;
}

bool OAIUpdateThreadRequestPartial::is_applied_tags_Set() const{
    return m_applied_tags_isSet;
}

bool OAIUpdateThreadRequestPartial::is_applied_tags_Valid() const{
    return m_applied_tags_isValid;
}

qint32 OAIUpdateThreadRequestPartial::getBitrate() const {
    return m_bitrate;
}
void OAIUpdateThreadRequestPartial::setBitrate(const qint32 &bitrate) {
    m_bitrate = bitrate;
    m_bitrate_isSet = true;
}

bool OAIUpdateThreadRequestPartial::is_bitrate_Set() const{
    return m_bitrate_isSet;
}

bool OAIUpdateThreadRequestPartial::is_bitrate_Valid() const{
    return m_bitrate_isValid;
}

qint32 OAIUpdateThreadRequestPartial::getUserLimit() const {
    return m_user_limit;
}
void OAIUpdateThreadRequestPartial::setUserLimit(const qint32 &user_limit) {
    m_user_limit = user_limit;
    m_user_limit_isSet = true;
}

bool OAIUpdateThreadRequestPartial::is_user_limit_Set() const{
    return m_user_limit_isSet;
}

bool OAIUpdateThreadRequestPartial::is_user_limit_Valid() const{
    return m_user_limit_isValid;
}

QString OAIUpdateThreadRequestPartial::getRtcRegion() const {
    return m_rtc_region;
}
void OAIUpdateThreadRequestPartial::setRtcRegion(const QString &rtc_region) {
    m_rtc_region = rtc_region;
    m_rtc_region_isSet = true;
}

bool OAIUpdateThreadRequestPartial::is_rtc_region_Set() const{
    return m_rtc_region_isSet;
}

bool OAIUpdateThreadRequestPartial::is_rtc_region_Valid() const{
    return m_rtc_region_isValid;
}

qint32 OAIUpdateThreadRequestPartial::getVideoQualityMode() const {
    return m_video_quality_mode;
}
void OAIUpdateThreadRequestPartial::setVideoQualityMode(const qint32 &video_quality_mode) {
    m_video_quality_mode = video_quality_mode;
    m_video_quality_mode_isSet = true;
}

bool OAIUpdateThreadRequestPartial::is_video_quality_mode_Set() const{
    return m_video_quality_mode_isSet;
}

bool OAIUpdateThreadRequestPartial::is_video_quality_mode_Valid() const{
    return m_video_quality_mode_isValid;
}

bool OAIUpdateThreadRequestPartial::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_archived_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_locked_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_invitable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_auto_archive_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rate_limit_per_user_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_applied_tags.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_bitrate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_limit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rtc_region_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_quality_mode_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUpdateThreadRequestPartial::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
