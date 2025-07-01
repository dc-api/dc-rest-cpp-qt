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

#include "OAIWebhookSlackEmbed.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIWebhookSlackEmbed::OAIWebhookSlackEmbed(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhookSlackEmbed::OAIWebhookSlackEmbed() {
    this->initializeModel();
}

OAIWebhookSlackEmbed::~OAIWebhookSlackEmbed() {}

void OAIWebhookSlackEmbed::initializeModel() {

    m_title_isSet = false;
    m_title_isValid = false;

    m_title_link_isSet = false;
    m_title_link_isValid = false;

    m_text_isSet = false;
    m_text_isValid = false;

    m_color_isSet = false;
    m_color_isValid = false;

    m_ts_isSet = false;
    m_ts_isValid = false;

    m_pretext_isSet = false;
    m_pretext_isValid = false;

    m_footer_isSet = false;
    m_footer_isValid = false;

    m_footer_icon_isSet = false;
    m_footer_icon_isValid = false;

    m_author_name_isSet = false;
    m_author_name_isValid = false;

    m_author_link_isSet = false;
    m_author_link_isValid = false;

    m_author_icon_isSet = false;
    m_author_icon_isValid = false;

    m_image_url_isSet = false;
    m_image_url_isValid = false;

    m_thumb_url_isSet = false;
    m_thumb_url_isValid = false;

    m_fields_isSet = false;
    m_fields_isValid = false;
}

void OAIWebhookSlackEmbed::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhookSlackEmbed::fromJsonObject(QJsonObject json) {

    m_title_isValid = ::dc_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_title_link_isValid = ::dc_rest::fromJsonValue(m_title_link, json[QString("title_link")]);
    m_title_link_isSet = !json[QString("title_link")].isNull() && m_title_link_isValid;

    m_text_isValid = ::dc_rest::fromJsonValue(m_text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_color_isValid = ::dc_rest::fromJsonValue(m_color, json[QString("color")]);
    m_color_isSet = !json[QString("color")].isNull() && m_color_isValid;

    m_ts_isValid = ::dc_rest::fromJsonValue(m_ts, json[QString("ts")]);
    m_ts_isSet = !json[QString("ts")].isNull() && m_ts_isValid;

    m_pretext_isValid = ::dc_rest::fromJsonValue(m_pretext, json[QString("pretext")]);
    m_pretext_isSet = !json[QString("pretext")].isNull() && m_pretext_isValid;

    m_footer_isValid = ::dc_rest::fromJsonValue(m_footer, json[QString("footer")]);
    m_footer_isSet = !json[QString("footer")].isNull() && m_footer_isValid;

    m_footer_icon_isValid = ::dc_rest::fromJsonValue(m_footer_icon, json[QString("footer_icon")]);
    m_footer_icon_isSet = !json[QString("footer_icon")].isNull() && m_footer_icon_isValid;

    m_author_name_isValid = ::dc_rest::fromJsonValue(m_author_name, json[QString("author_name")]);
    m_author_name_isSet = !json[QString("author_name")].isNull() && m_author_name_isValid;

    m_author_link_isValid = ::dc_rest::fromJsonValue(m_author_link, json[QString("author_link")]);
    m_author_link_isSet = !json[QString("author_link")].isNull() && m_author_link_isValid;

    m_author_icon_isValid = ::dc_rest::fromJsonValue(m_author_icon, json[QString("author_icon")]);
    m_author_icon_isSet = !json[QString("author_icon")].isNull() && m_author_icon_isValid;

    m_image_url_isValid = ::dc_rest::fromJsonValue(m_image_url, json[QString("image_url")]);
    m_image_url_isSet = !json[QString("image_url")].isNull() && m_image_url_isValid;

    m_thumb_url_isValid = ::dc_rest::fromJsonValue(m_thumb_url, json[QString("thumb_url")]);
    m_thumb_url_isSet = !json[QString("thumb_url")].isNull() && m_thumb_url_isValid;

    m_fields_isValid = ::dc_rest::fromJsonValue(m_fields, json[QString("fields")]);
    m_fields_isSet = !json[QString("fields")].isNull() && m_fields_isValid;
}

QString OAIWebhookSlackEmbed::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhookSlackEmbed::asJsonObject() const {
    QJsonObject obj;
    if (m_title_isSet) {
        obj.insert(QString("title"), ::dc_rest::toJsonValue(m_title));
    }
    if (m_title_link_isSet) {
        obj.insert(QString("title_link"), ::dc_rest::toJsonValue(m_title_link));
    }
    if (m_text_isSet) {
        obj.insert(QString("text"), ::dc_rest::toJsonValue(m_text));
    }
    if (m_color_isSet) {
        obj.insert(QString("color"), ::dc_rest::toJsonValue(m_color));
    }
    if (m_ts_isSet) {
        obj.insert(QString("ts"), ::dc_rest::toJsonValue(m_ts));
    }
    if (m_pretext_isSet) {
        obj.insert(QString("pretext"), ::dc_rest::toJsonValue(m_pretext));
    }
    if (m_footer_isSet) {
        obj.insert(QString("footer"), ::dc_rest::toJsonValue(m_footer));
    }
    if (m_footer_icon_isSet) {
        obj.insert(QString("footer_icon"), ::dc_rest::toJsonValue(m_footer_icon));
    }
    if (m_author_name_isSet) {
        obj.insert(QString("author_name"), ::dc_rest::toJsonValue(m_author_name));
    }
    if (m_author_link_isSet) {
        obj.insert(QString("author_link"), ::dc_rest::toJsonValue(m_author_link));
    }
    if (m_author_icon_isSet) {
        obj.insert(QString("author_icon"), ::dc_rest::toJsonValue(m_author_icon));
    }
    if (m_image_url_isSet) {
        obj.insert(QString("image_url"), ::dc_rest::toJsonValue(m_image_url));
    }
    if (m_thumb_url_isSet) {
        obj.insert(QString("thumb_url"), ::dc_rest::toJsonValue(m_thumb_url));
    }
    if (m_fields.size() > 0) {
        obj.insert(QString("fields"), ::dc_rest::toJsonValue(m_fields));
    }
    return obj;
}

QString OAIWebhookSlackEmbed::getTitle() const {
    return m_title;
}
void OAIWebhookSlackEmbed::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIWebhookSlackEmbed::is_title_Set() const{
    return m_title_isSet;
}

bool OAIWebhookSlackEmbed::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIWebhookSlackEmbed::getTitleLink() const {
    return m_title_link;
}
void OAIWebhookSlackEmbed::setTitleLink(const QString &title_link) {
    m_title_link = title_link;
    m_title_link_isSet = true;
}

bool OAIWebhookSlackEmbed::is_title_link_Set() const{
    return m_title_link_isSet;
}

bool OAIWebhookSlackEmbed::is_title_link_Valid() const{
    return m_title_link_isValid;
}

QString OAIWebhookSlackEmbed::getText() const {
    return m_text;
}
void OAIWebhookSlackEmbed::setText(const QString &text) {
    m_text = text;
    m_text_isSet = true;
}

bool OAIWebhookSlackEmbed::is_text_Set() const{
    return m_text_isSet;
}

bool OAIWebhookSlackEmbed::is_text_Valid() const{
    return m_text_isValid;
}

QString OAIWebhookSlackEmbed::getColor() const {
    return m_color;
}
void OAIWebhookSlackEmbed::setColor(const QString &color) {
    m_color = color;
    m_color_isSet = true;
}

bool OAIWebhookSlackEmbed::is_color_Set() const{
    return m_color_isSet;
}

bool OAIWebhookSlackEmbed::is_color_Valid() const{
    return m_color_isValid;
}

qint32 OAIWebhookSlackEmbed::getTs() const {
    return m_ts;
}
void OAIWebhookSlackEmbed::setTs(const qint32 &ts) {
    m_ts = ts;
    m_ts_isSet = true;
}

bool OAIWebhookSlackEmbed::is_ts_Set() const{
    return m_ts_isSet;
}

bool OAIWebhookSlackEmbed::is_ts_Valid() const{
    return m_ts_isValid;
}

QString OAIWebhookSlackEmbed::getPretext() const {
    return m_pretext;
}
void OAIWebhookSlackEmbed::setPretext(const QString &pretext) {
    m_pretext = pretext;
    m_pretext_isSet = true;
}

bool OAIWebhookSlackEmbed::is_pretext_Set() const{
    return m_pretext_isSet;
}

bool OAIWebhookSlackEmbed::is_pretext_Valid() const{
    return m_pretext_isValid;
}

QString OAIWebhookSlackEmbed::getFooter() const {
    return m_footer;
}
void OAIWebhookSlackEmbed::setFooter(const QString &footer) {
    m_footer = footer;
    m_footer_isSet = true;
}

bool OAIWebhookSlackEmbed::is_footer_Set() const{
    return m_footer_isSet;
}

bool OAIWebhookSlackEmbed::is_footer_Valid() const{
    return m_footer_isValid;
}

QString OAIWebhookSlackEmbed::getFooterIcon() const {
    return m_footer_icon;
}
void OAIWebhookSlackEmbed::setFooterIcon(const QString &footer_icon) {
    m_footer_icon = footer_icon;
    m_footer_icon_isSet = true;
}

bool OAIWebhookSlackEmbed::is_footer_icon_Set() const{
    return m_footer_icon_isSet;
}

bool OAIWebhookSlackEmbed::is_footer_icon_Valid() const{
    return m_footer_icon_isValid;
}

QString OAIWebhookSlackEmbed::getAuthorName() const {
    return m_author_name;
}
void OAIWebhookSlackEmbed::setAuthorName(const QString &author_name) {
    m_author_name = author_name;
    m_author_name_isSet = true;
}

bool OAIWebhookSlackEmbed::is_author_name_Set() const{
    return m_author_name_isSet;
}

bool OAIWebhookSlackEmbed::is_author_name_Valid() const{
    return m_author_name_isValid;
}

QString OAIWebhookSlackEmbed::getAuthorLink() const {
    return m_author_link;
}
void OAIWebhookSlackEmbed::setAuthorLink(const QString &author_link) {
    m_author_link = author_link;
    m_author_link_isSet = true;
}

bool OAIWebhookSlackEmbed::is_author_link_Set() const{
    return m_author_link_isSet;
}

bool OAIWebhookSlackEmbed::is_author_link_Valid() const{
    return m_author_link_isValid;
}

QString OAIWebhookSlackEmbed::getAuthorIcon() const {
    return m_author_icon;
}
void OAIWebhookSlackEmbed::setAuthorIcon(const QString &author_icon) {
    m_author_icon = author_icon;
    m_author_icon_isSet = true;
}

bool OAIWebhookSlackEmbed::is_author_icon_Set() const{
    return m_author_icon_isSet;
}

bool OAIWebhookSlackEmbed::is_author_icon_Valid() const{
    return m_author_icon_isValid;
}

QString OAIWebhookSlackEmbed::getImageUrl() const {
    return m_image_url;
}
void OAIWebhookSlackEmbed::setImageUrl(const QString &image_url) {
    m_image_url = image_url;
    m_image_url_isSet = true;
}

bool OAIWebhookSlackEmbed::is_image_url_Set() const{
    return m_image_url_isSet;
}

bool OAIWebhookSlackEmbed::is_image_url_Valid() const{
    return m_image_url_isValid;
}

QString OAIWebhookSlackEmbed::getThumbUrl() const {
    return m_thumb_url;
}
void OAIWebhookSlackEmbed::setThumbUrl(const QString &thumb_url) {
    m_thumb_url = thumb_url;
    m_thumb_url_isSet = true;
}

bool OAIWebhookSlackEmbed::is_thumb_url_Set() const{
    return m_thumb_url_isSet;
}

bool OAIWebhookSlackEmbed::is_thumb_url_Valid() const{
    return m_thumb_url_isValid;
}

QList<OAIWebhookSlackEmbedField> OAIWebhookSlackEmbed::getFields() const {
    return m_fields;
}
void OAIWebhookSlackEmbed::setFields(const QList<OAIWebhookSlackEmbedField> &fields) {
    m_fields = fields;
    m_fields_isSet = true;
}

bool OAIWebhookSlackEmbed::is_fields_Set() const{
    return m_fields_isSet;
}

bool OAIWebhookSlackEmbed::is_fields_Valid() const{
    return m_fields_isValid;
}

bool OAIWebhookSlackEmbed::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_link_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_color_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ts_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pretext_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_footer_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_footer_icon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_author_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_author_link_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_author_icon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_image_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumb_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fields.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhookSlackEmbed::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
