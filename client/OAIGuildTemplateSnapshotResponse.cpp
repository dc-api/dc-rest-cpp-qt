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

#include "OAIGuildTemplateSnapshotResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildTemplateSnapshotResponse::OAIGuildTemplateSnapshotResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildTemplateSnapshotResponse::OAIGuildTemplateSnapshotResponse() {
    this->initializeModel();
}

OAIGuildTemplateSnapshotResponse::~OAIGuildTemplateSnapshotResponse() {}

void OAIGuildTemplateSnapshotResponse::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_verification_level_isSet = false;
    m_verification_level_isValid = false;

    m_default_message_notifications_isSet = false;
    m_default_message_notifications_isValid = false;

    m_explicit_content_filter_isSet = false;
    m_explicit_content_filter_isValid = false;

    m_preferred_locale_isSet = false;
    m_preferred_locale_isValid = false;

    m_afk_timeout_isSet = false;
    m_afk_timeout_isValid = false;

    m_system_channel_flags_isSet = false;
    m_system_channel_flags_isValid = false;

    m_roles_isSet = false;
    m_roles_isValid = false;

    m_channels_isSet = false;
    m_channels_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_region_isSet = false;
    m_region_isValid = false;

    m_afk_channel_id_isSet = false;
    m_afk_channel_id_isValid = false;

    m_system_channel_id_isSet = false;
    m_system_channel_id_isValid = false;
}

void OAIGuildTemplateSnapshotResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildTemplateSnapshotResponse::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_verification_level_isValid = ::dc_rest::fromJsonValue(m_verification_level, json[QString("verification_level")]);
    m_verification_level_isSet = !json[QString("verification_level")].isNull() && m_verification_level_isValid;

    m_default_message_notifications_isValid = ::dc_rest::fromJsonValue(m_default_message_notifications, json[QString("default_message_notifications")]);
    m_default_message_notifications_isSet = !json[QString("default_message_notifications")].isNull() && m_default_message_notifications_isValid;

    m_explicit_content_filter_isValid = ::dc_rest::fromJsonValue(m_explicit_content_filter, json[QString("explicit_content_filter")]);
    m_explicit_content_filter_isSet = !json[QString("explicit_content_filter")].isNull() && m_explicit_content_filter_isValid;

    m_preferred_locale_isValid = ::dc_rest::fromJsonValue(m_preferred_locale, json[QString("preferred_locale")]);
    m_preferred_locale_isSet = !json[QString("preferred_locale")].isNull() && m_preferred_locale_isValid;

    m_afk_timeout_isValid = ::dc_rest::fromJsonValue(m_afk_timeout, json[QString("afk_timeout")]);
    m_afk_timeout_isSet = !json[QString("afk_timeout")].isNull() && m_afk_timeout_isValid;

    m_system_channel_flags_isValid = ::dc_rest::fromJsonValue(m_system_channel_flags, json[QString("system_channel_flags")]);
    m_system_channel_flags_isSet = !json[QString("system_channel_flags")].isNull() && m_system_channel_flags_isValid;

    m_roles_isValid = ::dc_rest::fromJsonValue(m_roles, json[QString("roles")]);
    m_roles_isSet = !json[QString("roles")].isNull() && m_roles_isValid;

    m_channels_isValid = ::dc_rest::fromJsonValue(m_channels, json[QString("channels")]);
    m_channels_isSet = !json[QString("channels")].isNull() && m_channels_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_region_isValid = ::dc_rest::fromJsonValue(m_region, json[QString("region")]);
    m_region_isSet = !json[QString("region")].isNull() && m_region_isValid;

    m_afk_channel_id_isValid = ::dc_rest::fromJsonValue(m_afk_channel_id, json[QString("afk_channel_id")]);
    m_afk_channel_id_isSet = !json[QString("afk_channel_id")].isNull() && m_afk_channel_id_isValid;

    m_system_channel_id_isValid = ::dc_rest::fromJsonValue(m_system_channel_id, json[QString("system_channel_id")]);
    m_system_channel_id_isSet = !json[QString("system_channel_id")].isNull() && m_system_channel_id_isValid;
}

QString OAIGuildTemplateSnapshotResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildTemplateSnapshotResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_verification_level_isSet) {
        obj.insert(QString("verification_level"), ::dc_rest::toJsonValue(m_verification_level));
    }
    if (m_default_message_notifications_isSet) {
        obj.insert(QString("default_message_notifications"), ::dc_rest::toJsonValue(m_default_message_notifications));
    }
    if (m_explicit_content_filter_isSet) {
        obj.insert(QString("explicit_content_filter"), ::dc_rest::toJsonValue(m_explicit_content_filter));
    }
    if (m_preferred_locale_isSet) {
        obj.insert(QString("preferred_locale"), ::dc_rest::toJsonValue(m_preferred_locale));
    }
    if (m_afk_timeout_isSet) {
        obj.insert(QString("afk_timeout"), ::dc_rest::toJsonValue(m_afk_timeout));
    }
    if (m_system_channel_flags_isSet) {
        obj.insert(QString("system_channel_flags"), ::dc_rest::toJsonValue(m_system_channel_flags));
    }
    if (m_roles.size() > 0) {
        obj.insert(QString("roles"), ::dc_rest::toJsonValue(m_roles));
    }
    if (m_channels.size() > 0) {
        obj.insert(QString("channels"), ::dc_rest::toJsonValue(m_channels));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_region_isSet) {
        obj.insert(QString("region"), ::dc_rest::toJsonValue(m_region));
    }
    if (m_afk_channel_id_isSet) {
        obj.insert(QString("afk_channel_id"), ::dc_rest::toJsonValue(m_afk_channel_id));
    }
    if (m_system_channel_id_isSet) {
        obj.insert(QString("system_channel_id"), ::dc_rest::toJsonValue(m_system_channel_id));
    }
    return obj;
}

QString OAIGuildTemplateSnapshotResponse::getName() const {
    return m_name;
}
void OAIGuildTemplateSnapshotResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIGuildTemplateSnapshotResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIGuildTemplateSnapshotResponse::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIGuildTemplateSnapshotResponse::getVerificationLevel() const {
    return m_verification_level;
}
void OAIGuildTemplateSnapshotResponse::setVerificationLevel(const qint32 &verification_level) {
    m_verification_level = verification_level;
    m_verification_level_isSet = true;
}

bool OAIGuildTemplateSnapshotResponse::is_verification_level_Set() const{
    return m_verification_level_isSet;
}

bool OAIGuildTemplateSnapshotResponse::is_verification_level_Valid() const{
    return m_verification_level_isValid;
}

qint32 OAIGuildTemplateSnapshotResponse::getDefaultMessageNotifications() const {
    return m_default_message_notifications;
}
void OAIGuildTemplateSnapshotResponse::setDefaultMessageNotifications(const qint32 &default_message_notifications) {
    m_default_message_notifications = default_message_notifications;
    m_default_message_notifications_isSet = true;
}

bool OAIGuildTemplateSnapshotResponse::is_default_message_notifications_Set() const{
    return m_default_message_notifications_isSet;
}

bool OAIGuildTemplateSnapshotResponse::is_default_message_notifications_Valid() const{
    return m_default_message_notifications_isValid;
}

qint32 OAIGuildTemplateSnapshotResponse::getExplicitContentFilter() const {
    return m_explicit_content_filter;
}
void OAIGuildTemplateSnapshotResponse::setExplicitContentFilter(const qint32 &explicit_content_filter) {
    m_explicit_content_filter = explicit_content_filter;
    m_explicit_content_filter_isSet = true;
}

bool OAIGuildTemplateSnapshotResponse::is_explicit_content_filter_Set() const{
    return m_explicit_content_filter_isSet;
}

bool OAIGuildTemplateSnapshotResponse::is_explicit_content_filter_Valid() const{
    return m_explicit_content_filter_isValid;
}

QString OAIGuildTemplateSnapshotResponse::getPreferredLocale() const {
    return m_preferred_locale;
}
void OAIGuildTemplateSnapshotResponse::setPreferredLocale(const QString &preferred_locale) {
    m_preferred_locale = preferred_locale;
    m_preferred_locale_isSet = true;
}

bool OAIGuildTemplateSnapshotResponse::is_preferred_locale_Set() const{
    return m_preferred_locale_isSet;
}

bool OAIGuildTemplateSnapshotResponse::is_preferred_locale_Valid() const{
    return m_preferred_locale_isValid;
}

qint32 OAIGuildTemplateSnapshotResponse::getAfkTimeout() const {
    return m_afk_timeout;
}
void OAIGuildTemplateSnapshotResponse::setAfkTimeout(const qint32 &afk_timeout) {
    m_afk_timeout = afk_timeout;
    m_afk_timeout_isSet = true;
}

bool OAIGuildTemplateSnapshotResponse::is_afk_timeout_Set() const{
    return m_afk_timeout_isSet;
}

bool OAIGuildTemplateSnapshotResponse::is_afk_timeout_Valid() const{
    return m_afk_timeout_isValid;
}

qint32 OAIGuildTemplateSnapshotResponse::getSystemChannelFlags() const {
    return m_system_channel_flags;
}
void OAIGuildTemplateSnapshotResponse::setSystemChannelFlags(const qint32 &system_channel_flags) {
    m_system_channel_flags = system_channel_flags;
    m_system_channel_flags_isSet = true;
}

bool OAIGuildTemplateSnapshotResponse::is_system_channel_flags_Set() const{
    return m_system_channel_flags_isSet;
}

bool OAIGuildTemplateSnapshotResponse::is_system_channel_flags_Valid() const{
    return m_system_channel_flags_isValid;
}

QList<OAIGuildTemplateRoleResponse> OAIGuildTemplateSnapshotResponse::getRoles() const {
    return m_roles;
}
void OAIGuildTemplateSnapshotResponse::setRoles(const QList<OAIGuildTemplateRoleResponse> &roles) {
    m_roles = roles;
    m_roles_isSet = true;
}

bool OAIGuildTemplateSnapshotResponse::is_roles_Set() const{
    return m_roles_isSet;
}

bool OAIGuildTemplateSnapshotResponse::is_roles_Valid() const{
    return m_roles_isValid;
}

QList<OAIGuildTemplateChannelResponse> OAIGuildTemplateSnapshotResponse::getChannels() const {
    return m_channels;
}
void OAIGuildTemplateSnapshotResponse::setChannels(const QList<OAIGuildTemplateChannelResponse> &channels) {
    m_channels = channels;
    m_channels_isSet = true;
}

bool OAIGuildTemplateSnapshotResponse::is_channels_Set() const{
    return m_channels_isSet;
}

bool OAIGuildTemplateSnapshotResponse::is_channels_Valid() const{
    return m_channels_isValid;
}

QString OAIGuildTemplateSnapshotResponse::getDescription() const {
    return m_description;
}
void OAIGuildTemplateSnapshotResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIGuildTemplateSnapshotResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIGuildTemplateSnapshotResponse::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIGuildTemplateSnapshotResponse::getRegion() const {
    return m_region;
}
void OAIGuildTemplateSnapshotResponse::setRegion(const QString &region) {
    m_region = region;
    m_region_isSet = true;
}

bool OAIGuildTemplateSnapshotResponse::is_region_Set() const{
    return m_region_isSet;
}

bool OAIGuildTemplateSnapshotResponse::is_region_Valid() const{
    return m_region_isValid;
}

QString OAIGuildTemplateSnapshotResponse::getAfkChannelId() const {
    return m_afk_channel_id;
}
void OAIGuildTemplateSnapshotResponse::setAfkChannelId(const QString &afk_channel_id) {
    m_afk_channel_id = afk_channel_id;
    m_afk_channel_id_isSet = true;
}

bool OAIGuildTemplateSnapshotResponse::is_afk_channel_id_Set() const{
    return m_afk_channel_id_isSet;
}

bool OAIGuildTemplateSnapshotResponse::is_afk_channel_id_Valid() const{
    return m_afk_channel_id_isValid;
}

QString OAIGuildTemplateSnapshotResponse::getSystemChannelId() const {
    return m_system_channel_id;
}
void OAIGuildTemplateSnapshotResponse::setSystemChannelId(const QString &system_channel_id) {
    m_system_channel_id = system_channel_id;
    m_system_channel_id_isSet = true;
}

bool OAIGuildTemplateSnapshotResponse::is_system_channel_id_Set() const{
    return m_system_channel_id_isSet;
}

bool OAIGuildTemplateSnapshotResponse::is_system_channel_id_Valid() const{
    return m_system_channel_id_isValid;
}

bool OAIGuildTemplateSnapshotResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_verification_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_message_notifications_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_explicit_content_filter_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_preferred_locale_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_afk_timeout_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_system_channel_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_roles.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_channels.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_region_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_afk_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_system_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildTemplateSnapshotResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && m_verification_level_isValid && m_default_message_notifications_isValid && m_explicit_content_filter_isValid && m_preferred_locale_isValid && m_afk_timeout_isValid && m_system_channel_flags_isValid && m_roles_isValid && m_channels_isValid && true;
}

} // namespace dc_rest
